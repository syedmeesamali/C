#include <stdio.h>

int main()
{
    int a[4] = {2, 4, 6, 8};
    int *p;
    p = &a[0];

    printf("Address p = %d, Value p = %d \n", p, *p);
    printf("Address + 1 = %d, Value + 1 = %d \n", p+1, *(p+1));

    return 0;
}
