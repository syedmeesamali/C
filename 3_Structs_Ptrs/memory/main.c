#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char a[6] = "meesam";
    for (int i=0; i<=5; i++)
    {
        printf("a[%d] = %c at address %p\n", i, a[i], &a[i]);
    }*/
    char name[20];
    int i;
    int strlen = 0;
    printf("Enter your name:");
    scanf("%s", &name);

    for (i=0; i<20; i++)
    {
        if (name[i] != '\0')
        {
            printf("%c = %p\n", name[i], &name[i]);
        } else
        {
            return;
        }
    }
    return 0;
}
