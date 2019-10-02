#include <stdio.h>
int larger(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int x = 20;
    while (x > 1)
    {
        printf("X value is: %i\n", x);
        x = x - 1;
        if (x == 4)
        {
            break;
        }
    }
    return 0;
}
