#include<stdio.h>
#include<time.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        puts("Hello you handsome beast!!!");
    else
        printf("Hello, %s\n", argv[1]);
    
    time_t now;
    time(&now);
    printf("Computer time is %ld\n", now);
    printf("%s", ctime(&now));

    return 0;
}
