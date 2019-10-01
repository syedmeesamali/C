#include <stdio.h>
int larger(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int great = larger(25, 35);
    printf("%i is the largest", great);
    return 0;
}
