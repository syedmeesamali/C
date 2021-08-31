#include<stdio.h>
//Custom print function using pointers
void print(char *c)
{
    int i=0;
    while(*(c+i) != '\0')           //c[i] = *(c+i)
    {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}

//Using only array pointer
void print2(char *c)
{
    while(*c != '\0')           //c[i] = *(c+i)
    {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int main()
{
    char C[20] = "Using custom print";
    char D[20] = "Custom print of 2nd type";
    print(C);
    print2(D);
    return 0;
}
