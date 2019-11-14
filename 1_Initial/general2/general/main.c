#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int ans = 0;
    if (argc != 2)
    {
        fprintf(stderr, "Enter two arguments pls!");
        return 1;
    }
    printf("argv[0] = %s", argv[0]);
    printf("argv[1] = %s", argv[1]);
    printf("\nSum is: %d", ans);
    return 0;
}
