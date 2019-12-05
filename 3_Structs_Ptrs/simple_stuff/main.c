#include <stdio.h>
#include <stdlib.h>
/*
int power(int m, int n);
int main()
{
    int i;
    for (i=0; i<10; ++i)
    {
        printf("%d %5d %6d\n", i, power(2,i), power(-3,i));
    }
    return 0;
}

int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i=1; i<=n; ++i)
    {
        p = p * base;
    }
    return p;
}*/

int strlen(char *s)
{
    int n;
    for (n=0; *s != '\0'; s++)
    {
        n++;
    }
    return n;
}

int main()
{
    char a[10];
    printf("Enter a word: ");
    fgets(a, sizeof(a), stdin);
    printf("\nWord %s has %d chars:", a, strlen(a));
    return 0;
}
