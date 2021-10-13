#include <stdio.h>
#include <stdlib.h>

//Simple program to see and understand the pointers and their working.
int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i -- %p\n", n, p);
    return 0;
}
