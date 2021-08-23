#include<stdio.h>
int main()
{
    int a[4] = {1, 2, 3, 4};
    int *p;
    p = a;
    for (int i=0; i<4; i++)
    {
        printf("Pointer %d, Val: %d \n", (p+i), *(p+i));
    }
    return 0;
}
