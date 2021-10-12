#include <stdio.h>

int main()
{
    int a[4] = {2, 4, 6, 8};
    int *p;
    p = a;

    for (int i=0; i<4; i++)
    {
        printf("Pointer: %d \n", (p+i));
        printf("Value: %d \n", *(p+i));
    }

    return 0;
}
