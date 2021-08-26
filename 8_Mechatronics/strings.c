#include<stdio.h>
int main()
{
    char str1[] = "shah g";
    for (int n=0; n < sizeof(str1); n++)
    {
        printf("\nElement %d is %c and %d", n, str1[n], str1[n]);
    }
    printf("\nSize of string is %d", sizeof(str1));
    return 0;
}
