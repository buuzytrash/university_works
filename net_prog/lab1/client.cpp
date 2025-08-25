#include <iostream>
#include <cstring>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int sockfd;
    struct sockaddr_in servaddr;
    char buffer[BUFFER_SIZE];

    // Создание сокета
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&servaddr, 0, sizeof(servaddr));

    // Заполнение информации о сервере
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");

    int i = 1; // Заданное число

    while (1) {
        // Отправка заданного числа на сервер
        std::string message = std::to_string(i);
        sendto(sockfd, message.c_str(), message.size(), MSG_CONFIRM, (const struct sockaddr *)&servaddr, sizeof(servaddr));

        // Получение преобразованной информации от сервера
        int n = recvfrom(sockfd, (char *)buffer, BUFFER_SIZE, MSG_WAITALL, (struct sockaddr *)&servaddr, (socklen_t *)&servaddr);
        buffer[n] = '\0';

        // Вывод преобразованной информации на экран
        std::cout << "Server: " << buffer << std::endl;

        // Задержка в i секунд
        sleep(i);

        // Увеличение числа
        i++;
    }

    close(sockfd);
    return 0;
}