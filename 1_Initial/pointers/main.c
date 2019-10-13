#include <stdio.h>

int main()
{
    char s[] = "How big is it?";
    char *t = s;
    printf("Star t is: %c \n", *t);
    printf("s value is: %c \n", s);
    printf(sizeof(*t));
    printf(sizeof(s));
    return 0;
}
