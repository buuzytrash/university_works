#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <netdb.h>
#include <sys/time.h>
#include <time.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int sock;
    struct sockaddr_in servAddr;
    struct hostent *hp, *gethostbyname();
    if (argc < 4)
    {
        printf("ВВЕСТИ tcpclient имя_хоста порт сообщение\n");
        exit(1);
    }
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        perror("He могу получить socket\n");
        exit(1);
    }
    bzero((char *)&servAddr, sizeof(servAddr));
    servAddr.sin_family = AF_INET;

    if ((hp = gethostbyname(argv[1])) == NULL)
    {
        perror("Не правильное имя хоста\n");
        exit(1);
    }

    bcopy(hp->h_addr_list[0], &servAddr.sin_addr, hp->h_length);
    servAddr.sin_port = htons(atoi(argv[2]));

    if (inet_pton(AF_INET, argv[1], &servAddr.sin_addr) <= 0)
    {
        perror("Не могу получить адрес\n");
        exit(1);
    }

    if (connect(sock, (struct sockaddr *)&servAddr, sizeof(servAddr)) < 0)
    {
        perror("Клиент не может соединиться.\n");
        exit(1);
    }

    printf("CLIENT: Готов к пересылке\n");
    int num_of_msg = atoi(argv[3]);
    char buf[1024];
    for (int i = 1; i <= num_of_msg; i++)
    {
        memset(buf, '\0', sizeof(buf));
        sprintf(buf, "msg: %d", i);
        if ((send(sock, buf, strlen(buf), 0)) < 0)
        {
            perror("Ошибка при отправке сообщения\n");
            exit(1);
        }
        sleep(i);
    }

    printf("CLIENT: Пересылка завершена. Счастливо оставаться.\n");
    close(sock);
    return 0;
}