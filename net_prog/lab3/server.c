#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 0 // 0 для автоматического выбора порта
#define MAX_CLIENTS 5

pthread_mutex_t file_mutex = PTHREAD_MUTEX_INITIALIZER;

void *
handle_client(void *client_socket)
{
    int sock = *(int *)client_socket;
    char buffer[1024];
    ssize_t bytes_read;

    // Чтение данных от клиента
    while ((bytes_read = read(sock, buffer, sizeof(buffer) - 1)) > 0)
    {
        buffer[bytes_read] = '\0';
        printf("Получено от клиента: %s\n", buffer);

        pthread_mutex_lock(&file_mutex);
        // Сохранение данных в файл (добавление в конец файла)
        FILE *file = fopen("shared_file.txt", "a");
        if (file == NULL)
        {
            perror("Ошибка открытия файла");
            pthread_mutex_unlock(&file_mutex);
            exit(EXIT_FAILURE);
        }
        fprintf(file, "%s", buffer);
        fclose(file);
        pthread_mutex_unlock(&file_mutex);
    }

    if (bytes_read == 0)
    {
        printf("Клиент отключился\n");
    }
    else if (bytes_read == -1)
    {
        perror("Ошибка чтения данных от клиента");
    }

    close(sock);
    pthread_exit(NULL);
}

int main()
{
    int server_socket, client_socket, addr_len, port;
    struct sockaddr_in server_addr, client_addr;
    pthread_t thread_id;

    // Создание сокета
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket < 0)
    {
        perror("Ошибка создания сокета");
        exit(EXIT_FAILURE);
    }

    // Настройка адреса сервера
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    // Привязка сокета к адресу
    if (bind(server_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0)
    {
        perror("Ошибка привязки сокета");
        exit(EXIT_FAILURE);
    }

    // Получение номера порта
    addr_len = sizeof(server_addr);
    if (getsockname(server_socket, (struct sockaddr *)&server_addr, (socklen_t *)&addr_len) < 0)
    {
        perror("Ошибка получения номера порта");
        exit(EXIT_FAILURE);
    }
    port = ntohs(server_addr.sin_port);
    printf("Номер порта: %d\n", port);

    // Прослушивание входящих соединений
    listen(server_socket, MAX_CLIENTS);
    printf("Сервер запущен и ожидает подключения клиентов...\n");

    while (1)
    {
        // Принятие входящего соединения
        addr_len = sizeof(client_addr);
        client_socket = accept(server_socket, (struct sockaddr *)&client_addr, (socklen_t *)&addr_len);
        if (client_socket < 0)
        {
            perror("Ошибка принятия соединения");
            exit(EXIT_FAILURE);
        }

        // Создание отдельного потока для обработки клиента
        if (pthread_create(&thread_id, NULL, handle_client, (void *)&client_socket) != 0)
        {
            perror("Ошибка создания потока");
            exit(EXIT_FAILURE);
        }
        pthread_detach(thread_id);
    }

    return 0;
}
