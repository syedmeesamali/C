#include <stdio.h>
#include <stdlib.h>
#define MAX 15
int main()
{
    char buf[MAX];
    printf("Enter a string:");
    fgets(buf, MAX, stdin);
    printf("String is: %s\n", buf);
    return 0;
}
