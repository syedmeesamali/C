#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p;
    a = 10;
    p = &a; //&a is the address of a
    printf("Address of p: %d \n", p);
    printf("Value at p is: %d \n", *p);       //Value at address pointed at by p
    int b = 20;
    *p = b;
    printf("Address of p: %d \n", p);
    printf("Address of p+1 is: %d \n", p+1);
    printf("Value at p is: %d \n", *p);       //Value at address pointed at by p
    printf("Size of int is: %d \n", sizeof(int));
    //So the value of ADDRESS is NOT changed but the value of POINTED TO is changed

    return 0;
}
