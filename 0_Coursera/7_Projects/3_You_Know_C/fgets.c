#include<stdio.h>
#include<stdlib.h>

int main()
{
    char input[16];
    int a;
    char *p;
    printf("Type an integer: ");
    fgets(input, 16, stdin);
    a = atoi(input);        //atoi = ascii to integer
    a = strtol(input, &p, 10);      //string to LONG
    if (p == input)
    {
        puts("invalid input. \n");
    } else
    {
        printf("\nDouble of %d is %d. ", a, a*2);
    }

    return 0;
}
