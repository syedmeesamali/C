#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main(int argc, int *argv[])
{
    pid_t pid = getpid();
    printf("Parent PID = %d\n", (int) pid);
    pid_t child_pid = fork();
    if (child_pid > 0)
    {
        pid_t my_pid = getpid();
        printf("%d PARENT of %d\n", (int) my_pid, (int) child_pid);
    } else 
    {
        printf("FORK failed. \n");
    }
    return 0;
} //End of main
