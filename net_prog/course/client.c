#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 8080
#define BOARD_SIZE 3

void print_board(char board[BOARD_SIZE][BOARD_SIZE]);
void update_board(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, int player);
char board[BOARD_SIZE][BOARD_SIZE];

int main(int argc, char *argv[])
{
    int client_socket;
    struct sockaddr_in server_addr;
    char buffer[256];

    int row, col;
    int player;

    if (argc != 3)
    {
        printf("Использование: %s <IP_сервера> <порт> \n", argv[0]);
        exit(EXIT_FAILURE);
    }

    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket < 0)
    {
        perror("Ошибка создания сокета");
        exit(EXIT_FAILURE);
    }

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(atoi(argv[2]));

    if (inet_pton(AF_INET, argv[1], &server_addr.sin_addr) <= 0)
    {
        perror("Ошибка валидации адреса");
        exit(EXIT_FAILURE);
    }

    if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0)
    {
        perror("Ошибка подключения к серверу");
        exit(EXIT_FAILURE);
    }
    while (1)
    {
        printf("Ваш ход (формат: <строка> <колонка>): ");
        if (scanf("%d %d", &row, &col) == 2)
        {
            sprintf(buffer, "%d %d", row, col);
            send(client_socket, buffer, strlen(buffer), 0);
        }
        else
        {
            printf("Ошибка хода. Введите 2 числа, разделенных пробелом.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        int valread = read(client_socket, buffer, sizeof(buffer) - 1);
        if (valread > 0)
        {
            buffer[valread] = '\0';
            printf("Server: %s\n", buffer);

            if (strncmp(buffer, "доска: ", 8) == 0)
            {
                for (int i = 0; i < BOARD_SIZE; i++)
                {
                    for (int j = 0; j < BOARD_SIZE; j++)
                    {
                        sscanf(buffer + 8 + i * (BOARD_SIZE * 4 + 3) + j * 4, "%c%*[|]", &board[i][j]);
                    }
                }
                print_board(board);
            }
            else if (strncmp(buffer, "ход: ", 5) == 0)
            {
                sscanf(buffer + 5, "%d %d %d", &row, &col, &player);
                update_board(board, row, col, player);
            }
        }
        else if (valread == 0)
        {
            printf("Соединение с сервером закрыто\n");
            break;
        }
        else
        {
            perror("Ошибка при получении данных от сервера");
            break;
        }
    }

    return 0;
}

void print_board(char board[BOARD_SIZE][BOARD_SIZE])
{
    printf("Current board:\n");
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < BOARD_SIZE - 1)
            {
                printf(" |");
            }
        }
        printf("\n");
        if (i < BOARD_SIZE - 1)
        {
            printf("---+---+---\n");
        }
    }
}

void update_board(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, int player)
{
    board[row][col] = (player == 0) ? 'X' : 'O';
    printf("Поле обновилось\n");
}