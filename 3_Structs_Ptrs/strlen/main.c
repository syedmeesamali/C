#include <stdio.h>
#include <stdlib.h>

int strlen(char *s)
{
    int n;
    for (n=0; *s != '\0'; s++)
    {
        n++;
    }
    return n-1;
}
int main()
{
    char a[20];
    printf("Enter some word!");
    fgets(a, 20, stdin);
    printf("Length of string %s is %d: ", a, strlen(a));
    return 0;
}

