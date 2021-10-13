#include <stdio.h>
#include <stdlib.h>

//Simple program to see and understand the pointers and their working.
int main(void)
{
    int n = 50;
    int *p = &n;
    char *s = "meesam";
    printf("%i -- %p\n", n, p);
    printf("%s\n", s);
    printf("%c\n", s[3]);
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    return 0;
}
