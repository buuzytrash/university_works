#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>

#define SERVER_PORT 0
#define MAX_CLIENTS 2
#define BOARD_SIZE 3

void *
handle_client(void *);
void send_message(char *, int);
void init_board();
void update_board(int, int, int);
int check_win();
void print_board();
char *print_board_as_string();

char board[BOARD_SIZE][BOARD_SIZE];
int client_sockets[MAX_CLIENTS];
int max_clients = MAX_CLIENTS;
int client_count = 0;
int curr_player = 0;
int turn = 0;
pthread_mutex_t clients_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t board_mutex = PTHREAD_MUTEX_INITIALIZER;

int main()
{
    int server_socket, client_socket, port;
    struct sockaddr_in server_address;
    int addr_len = sizeof(server_address);
    pthread_t thread_id;

    if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("Ошибка создания сокета");
        exit(EXIT_FAILURE);
    }

    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = INADDR_ANY;
    server_address.sin_port = htons(SERVER_PORT);

    if (bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address)) < 0)
    {
        perror("Ошибка привязки сокета");
        exit(EXIT_FAILURE);
    }

    if (getsockname(server_socket, (struct sockaddr *)&server_address, (socklen_t *)&addr_len) < 0)
    {
        perror("Ошибка получения номера порта");
        exit(EXIT_FAILURE);
    }

    port = ntohs(server_address.sin_port);
    printf("Номер порта: %d\n", port);

    if (listen(server_socket, 3) < 0)
    {
        perror("listen");
        exit(EXIT_FAILURE);
    }

    printf("Сервер запущен и ожидает подключения клиентов...\n");

    while (1)
    {
        addr_len = sizeof(client_socket);
        if ((client_socket = accept(server_socket, (struct sockaddr *)&server_address, (socklen_t *)&addr_len)) < 0)
        {
            perror("Ошибка принятия соединения");
            exit(EXIT_FAILURE);
        }

        printf("Подключение к клиенту\n");

        pthread_mutex_lock(&clients_mutex);
        for (int i = 0; i < max_clients; i++)
        {
            if (client_sockets[i] == 0)
            {
                client_sockets[i] = client_socket;
                break;
            }
        }
        client_count++;
        pthread_mutex_unlock(&clients_mutex);

        printf("%d\n", client_count);

        if (pthread_create(&thread_id, NULL, handle_client, &client_socket) != 0)
        {
            perror("Ошибка создания потока");
            exit(EXIT_FAILURE);
        }
        pthread_detach(thread_id);

        printf("Клиент обработан!\n");
    }

    return 0;
}

void *handle_client(void *arg)
{
    char buffer[256];
    int client_socket = *((int *)arg);
    int read_size;

    init_board();

    char info_message[128];
    sprintf(info_message, "Вы игрок №%d\n", curr_player);
    send_message(info_message, client_socket);

    while ((read_size = recv(client_socket, buffer, sizeof(buffer) - 1, 0)) > 0)
    {
        buffer[read_size] = '\0';
        printf("Получено от клиента: %s\n", buffer);

        int row = 0, col = 0;

        if (turn == client_socket)
        {
            char warning_message[64];
            sprintf(warning_message, "Сейчас не ваш ход!\n");
            continue;
        }

        turn = client_socket;
        if (sscanf(buffer, "%d %d", &row, &col) == 2 && row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE)
        {

            pthread_mutex_lock(&board_mutex);
            if (board[row][col] == ' ')
            {

                update_board(row, col, curr_player);
                print_board();

                int win = check_win();
                if (win != -1)
                {
                    printf("Выиграл игрок #%d!\n", win);
                    char win_message[32];
                    sprintf(win_message, "Выиграл игрок #%d!\n", win);
                    send_message(win_message, -1);
                    init_board();
                    curr_player = 0; // Сбрасываем игрока для новой игры
                }
                else
                {
                    curr_player = (curr_player + 1) % 2;
                }
                char move_message[256];
                printf("Игрок #%d сделал ход\n", curr_player);
                sprintf(move_message, "ход: %d %d %d", row, col, curr_player);
                send_message(move_message, -1);

                char board_message[1024];
                sprintf(board_message, "доска: %s", print_board_as_string());
                send_message(board_message, -1);
            }
            else
            {
                char error_message[256];
                sprintf(error_message, "Неверный ход игрока №%d: клетка (%d, %d) уже заполнена\n", curr_player, row, col);
                send_message(error_message, client_socket);
                pthread_mutex_unlock(&board_mutex);
                continue;
            }
            pthread_mutex_unlock(&board_mutex);
        }
        else
        {
            char error_message[256];
            sprintf(error_message, "Неверный формат хода у игрока #%d: ожидается 'строка столбец'\n", curr_player);
            send_message(error_message, client_socket);
            pthread_mutex_unlock(&board_mutex);
            continue;
        }

        send_message(buffer, client_socket);

        memset(buffer, 0, sizeof(buffer));
    }

    if (read_size == 0)
    {
        printf("Соединение с клиентом прервано\n");
        fflush(stdout);
    }
    else if (read_size == -1)
    {
        perror("Не удалось отправить сообщение");
    }

    // Закрытие сокета и удаление из массива клиентов
    pthread_mutex_lock(&clients_mutex);
    for (int i = 0; i < max_clients; i++)
    {
        if (client_sockets[i] == client_socket)
        {
            client_sockets[i] = 0;
            break;
        }
    }
    client_count--;
    pthread_mutex_unlock(&clients_mutex);

    close(client_socket);

    pthread_exit(NULL);
}

void send_message(char *message, int current_socket)
{
    pthread_mutex_lock(&clients_mutex);
    for (int i = 0; i < max_clients; i++)
    {
        if (client_sockets[i] > 0 && (client_sockets[i] != current_socket || current_socket == -1))
        {
            if (send(client_sockets[i], message, strlen(message), MSG_NOSIGNAL) != (ssize_t)strlen(message))
            {
                perror("send failed");
            }
        }
    }
    pthread_mutex_unlock(&clients_mutex);
}

void init_board()
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void update_board(int row, int col, int player)
{
    board[row][col] = (player == 0) ? 'X' : 'O';
    printf("Поле обновил\n");
}

int check_win()
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            return (board[i][0] == 'X') ? 0 : 1;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
        {
            return (board[0][i] == 'X') ? 0 : 1;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
        return (board[0][0] == 'X') ? 0 : 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
        return (board[0][2] == 'X') ? 0 : 1;
    }
    return -1;
}

void print_board()
{
    printf("Current board:\n");
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < BOARD_SIZE - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < BOARD_SIZE - 1)
        {
            printf("---+---+---\n");
        }
    }
}

char *print_board_as_string()
{
    static char board_string[1024];
    sprintf(board_string, "Current board:\n");
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            sprintf(board_string + strlen(board_string), " %c ", board[i][j]);
            if (j < BOARD_SIZE - 1)
            {
                sprintf(board_string + strlen(board_string), "|");
            }
        }
        sprintf(board_string + strlen(board_string), "\n");
        if (i < BOARD_SIZE - 1)
        {
            sprintf(board_string + strlen(board_string), "---+---+---\n");
        }
    }
    return board_string;
}