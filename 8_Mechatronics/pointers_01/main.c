#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p;
    p = &a;         //&a is address of variable a (int)
    printf("%d \n", p);
    printf("%d is Value of a\n", *p);       //Value at address pointed at by p
    return 0;
}
