#include <stdio.h>
void print(const char *c) //Const is used to force the imutability
{
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int count_e(char *d) //Const is used to force the imutability
{
    int count;
    while (*d != '\0')
    {
        if (*d == 'e')
        {
            count++;
            printf("%c", *d);
        }
        d++;
    }
    printf("\n");
    return count;
}


int main()
{
    char string[] = "some String!";
    print(string);
    printf("\n Count of e is %d!", count_e(string));
    return 0;
}
