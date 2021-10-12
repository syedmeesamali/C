#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i -- %p\n", n, p);
    return 0;
}
