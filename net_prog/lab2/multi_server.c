#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/time.h>
#include <sys/resource.h>

#define BUFLEN 1024
int BuffWork(int sockClient)
{
    char buf[BUFLEN];
    int msgLength;
    bzero(buf, BUFLEN);
    if ((msgLength = recv(sockClient, buf, BUFLEN, 0)) < 0)
    {
        perror("Плохое получение дочерним процессом.");
        exit(1);
    }
    printf("SERVER: Socket для клиента - %d\n", sockClient);
    printf("SERVER: Длина сообщения - %d\n", msgLength);
    printf("SERVER: Сообщение: %s\n\n", buf);
}
void reaper(int sig)
{
    int status;
    while (wait3(&status, WNOHANG, (struct rusage *)0) >= 0)
    {
    }
    printf("Сервер: процесс завершен\n");
}

int main()
{
    int sockMain, sockClient, length, child;
    struct sockaddr_in servAddr;
    if ((sockMain = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        perror("Сервер не может открыть главный socket.");
        exit(1);
    }
    bzero((char *)&servAddr, sizeof(servAddr));
    servAddr.sin_family = AF_INET;
    servAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servAddr.sin_port = 0;
    if (bind(sockMain, (struct sockaddr *)&servAddr, sizeof(servAddr)))
    {
        perror("Связывание сервера неудачно.");
        exit(1);
    }
    length = sizeof(servAddr);
    if (getsockname(sockMain, (struct sockaddr *)&servAddr, &length))
    {
        perror("Вызов getsockname неудачен.");
        exit(1);
    }
    printf("СЕРВЕР: номер порта - % d\n", ntohs(servAddr.sin_port));

    listen(sockMain, 5);
    signal(SIGCHLD, reaper);

    for (;;)
    {
        if ((sockClient = accept(sockMain, (struct sockaddr *)&servAddr, &length)) < 0)
        {
            perror("Неверный socket для клиента.");
            exit(1);
        }

        pid_t pid = fork();
        if (pid == 0)
        {
            close(sockMain);

            BuffWork(sockClient);

            close(sockClient);
            exit(0);
        }
        else if (pid > 0)
        {
            close(sockClient);
        }
        else
        {
            perror("fork");
            exit(1);
        }
    }
    return 0;
}
