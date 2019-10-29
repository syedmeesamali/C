#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 100;
    int *int_x;
    int_x = &x;
    printf("x is %d\n", x);
    printf("int_x is %d\n", int_x);
    *int_x = 200;
    printf("x is %d\n", x);
    printf("int_x is %d\n", *int_x);
    return 0;
}
