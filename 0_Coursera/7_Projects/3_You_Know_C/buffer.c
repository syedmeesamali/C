#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *buf;
    buf = (char *)malloc(32 * sizeof(char)); //Allocate 32 char space
    if (buf == NULL)
    {
        fprintf(stderr, "Unable to allocate space of 32 chars.\n");
        exit(1);
    }
    printf("32 bytes allocated.\n");
    free(buf);
    
    return 0;
}
