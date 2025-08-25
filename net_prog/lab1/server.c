#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <string.h>

#define BUFLEN 81

main()
{
    int sockMain, length, msgLength;
    struct sockaddr_in servAddr, clientAddr;
    char buf[BUFLEN], answer[10];

    if ((sockMain = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
    {
        perror("Сервер не может открыть socket для UDP.");
        exit(1);
    }
    bzero((char *)&servAddr, sizeof(servAddr));
    bzero((char *)&clientAddr, sizeof(clientAddr));

    servAddr.sin_family = AF_INET;
    servAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servAddr.sin_port = 0;

    if (bind(sockMain, &servAddr, sizeof(servAddr)))
    {
        perror("Связывание сервера неудачно.");
        exit(1);
    }

    length = sizeof(servAddr);
    if (getsockname(sockMain, &servAddr, &length))
    {
        perror("Вызов getsockname неудачен.");
        exit(1);
    }
    printf("СЕРВЕР: номер порта - %d\n", ntohs(servAddr.sin_port));
    length = sizeof(clientAddr);

    for (;;)
    {
        if ((msgLength = recvfrom(sockMain, buf, BUFLEN, 0, &clientAddr, &length)) < 0)
        {
            perror("Плохой socket клиента.");
            exit(1);
        }
        buf[msgLength] = '\0';

        printf("SERVER: IP адрес клиента: %s\n", inet_ntoa(clientAddr.sin_addr));
        printf("SERVER: PORT клиента: %d\n", ntohs(clientAddr.sin_port));
        printf("SERVER: Длина сообщения: %d\n", msgLength);
        printf("SERVER: Сообщение: %s\n\n", buf);

        strcpy(answer, buf);
        strcat(answer, "0");
        if (sendto(sockMain, answer, strlen(answer), 0, &clientAddr, length) < 0)
        {
            perror("Ответ не отправлен.\n");
            exit(1);
        }
        strcpy(answer, "");
    }

    return 0;
}
