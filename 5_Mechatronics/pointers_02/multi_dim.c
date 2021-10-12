#include <stdio.h>
int main()
{
    int a[2][2] = {{5,7}, {3, 4}};
    int (*p)[2] = a;
    printf("\n Item 1 is %d", a[0][0]);
    printf("\n Location 1 is %p", p[0]);
    printf("\n Item 2 is %d", a[0][1]);
    printf("\n Location 2 is %p", p[1]);
    printf("\n Item 3 is %d", a[0][2]);
    printf("\n Location 3 is %p", p[2]);
    printf("\n Item 4 is %d", a[0][3]);
    printf("\n Location 4 is %p", p[3]);
    printf("\n Pointer val %p", *(p+1));

    return 0;
}
