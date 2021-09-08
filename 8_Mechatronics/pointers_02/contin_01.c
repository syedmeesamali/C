#include <stdio.h>
void print(const char *c)
{
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

//Count particular character
void count_e(char *d)
{
    int count = 0;
    while (*d != '\0')
    {
        if (*d == 'e')
        {
            count++;
            printf("%d e is %c\n", count, *d);
        }
        d++;
    }
    printf("\n");
    printf("Count of e is %d", count);
}


int main()
{
    char string[] = "some Streeeng!";
    print(string);
    count_e(string);
    return 0;
}
