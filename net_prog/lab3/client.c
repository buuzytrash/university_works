#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
    int client_socket;
    struct sockaddr_in server_addr;
    char buffer[1024];
    int i, num_iterations;

    if (argc != 4)
    {
        printf("Использование: %s <IP_сервера> <порт> <количество_итераций>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Создание сокета
    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket < 0)
    {
        perror("Ошибка создания сокета");
        exit(EXIT_FAILURE);
    }

    // Настройка адреса сервера
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(atoi(argv[2]));

    if (inet_pton(AF_INET, argv[1], &server_addr.sin_addr) <= 0)
    {
        perror("Ошибка валидации адреса");
        exit(EXIT_FAILURE);
    }

    // Подключение к серверу
    if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0)
    {
        perror("Ошибка подключения к серверу");
        exit(EXIT_FAILURE);
    }

    num_iterations = atoi(argv[3]);
    for (i = 0; i < num_iterations; i++)
    {
        // Отправка данных на сервер
        sprintf(buffer, "Итерация %d\n", i);
        if (send(client_socket, buffer, strlen(buffer), 0) < 0)
        {
            perror("Ошибка отправки данных");
            exit(EXIT_FAILURE);
        }

        // Задержка перед следующей итерацией
        sleep(i);
    }

    close(client_socket);
    return 0;
}