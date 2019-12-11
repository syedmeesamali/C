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
#define _GNU_SOURCE

int strlen(char *s)
{
    int n;
    for (n=0; *s != '\0'; s++)
    {
        n++;
    }
    return n-1;
}
int main(void)
{
    /*char a[10];
    printf("Enter a word: ");
    fgets(a, sizeof(a), stdin);
    printf("\nWord %s has %d chars:", a, strlen(a));*/
    size_t input_size = 0;
    char* input_line = NULL;
    if (getline(&input_line, &input_size, stdin) == -1)
    {
        free(input_line);
        perror("Failed to read input!");
        return EXIT_FAILURE;
    }
    printf("Got input: %s\n", input_line);
    free(input_line);
    return 0;
}
