#include <stdio.h>
#include <stdlib.h>

void copystr(to, from)
char to[], from[];
{
    int i=0;
    while (from[i])
    {
        to[i] = from[i];
        ++i;
    }
    to[i] = '\0';
}

void copy2(to, from)
char *to, *from;
{
    while(*from)
    {
        *to = *from;
        ++from;
        ++to;
    }
    *to = '\0';
}

int main()
{
    char *str1 = "string one";
    static char str2[] = { "string two" };
    char buf[80];
    copystr(buf, str2);
    printf("%s\n", buf);

    return 0;
}
