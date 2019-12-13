#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[6] = "meesam";
    char *p = 0x0020F000;
    for (int i=0; i<=5; i++)
    {
        printf("a[%d] = %c at address %p\n", i, a[i], &a[i]);
    }
    printf("Value at address %p is %c", p, &p);
    return 0;
}
