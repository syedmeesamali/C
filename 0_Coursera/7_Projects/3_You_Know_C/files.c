#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
    int fd = open("example.txt", 0);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }
    printf("File descriptor: %d\n", fd);
    close(fd);
    return 0;
}
