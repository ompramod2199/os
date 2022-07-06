#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
int main()
{
    pid_t childPid;
    switch (childPid = fork())
    {
    case -1:
        printf("Fork error %s\n", strerror(errno));
        exit(1);
    case 0:
        printf("I am the child: %d\n", getpid());
        exit(0);
    default:
        printf("I am the father: %d\n", getpid());
        exit(0);
    }
    return 0;
}