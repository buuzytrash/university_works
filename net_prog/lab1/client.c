#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

#define h_addr h_addr_list[0]
#define BUFLEN 81

main(argc, argv)
int argc;
char *argv[];
{
    int sock, msgLength, length;
    struct sockaddr_in servAddr, clientAddr;
    struct hostent *hp, *gethostbyname();

    if (argc < 3)
    {
        printf("Ввести ./client имя_хоста порт\n");
        exit(1);
    }
    if((sock = socket(AF_INET, SOCK_DGRAM,0)) < 0 )
    {
        perror("Не могу получить socket\n");
        exit(1);
    }
    bzero((char*) &servAddr, sizeof(servAddr));

    servAddr.sin_family = AF_INET;
    hp = gethostbyname(argv[1]);
    bcopy(hp->h_addr, &servAddr.sin_addr, hp->h_length);
    servAddr.sin_port = htons(atoi(argv[2]));

    bzero((char*)&clientAddr, sizeof(clientAddr));

    clientAddr.sin_family = AF_INET;
    clientAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    clientAddr.sin_port = 0;

    if(bind (sock, &clientAddr, sizeof(clientAddr)))
    {
        perror("Клиент не получил порт.");
        exit(1);
    }

    printf("CLIENT: Готов к пересылке.\n");

    char buf[BUFLEN];
    length = sizeof(servAddr);
    int i = 1;

    for (;;)
    {
        char msg[10];
        sprintf(msg, "%d", i);

        if(sendto(sock, msg, strlen(msg), 0, &servAddr, length) < 0)
        {   
            perror("Проблемы с sendto\n");
            exit(1);
        }

        if(msgLength = recvfrom(sock, buf, BUFLEN, 0, &servAddr, &length) < 0)
        {
            perror("Не могу получить ответ от сервера.\n");
            exit(1);
        }
        printf("Сервер: %s\n", buf);

        sleep(i);
        i++;
    }
    close(sock);
    printf("CLIENT: Пересылка завершена. Счастливо оставаться.\n");

    return 0;
}