#include<stdio.h>
void increment(int *p)
{
    *p = *p + 1;
}

int main()
{
    int x = 50;
    printf("x val is %d. \n", x);
    increment(&x);
    printf("simple pointer increment - now x is %d. \n", x);
    return 0;
}
