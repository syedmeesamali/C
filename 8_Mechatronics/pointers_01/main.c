#include <stdio.h>

int main()
{
    int a = 1025;
    int *p;
    p = &a;     //&a is the address of a
    printf("Address = %d, Value = %d \n", p, *p);
    printf("Address + 1 = %d, Value + 1 = %d \n", p+1, *(p+1));
    char *p0;
    p0 = p;         //p0 pointer to same address as p but as char it contains one byte
    printf("Char Address = %d, Value = %d \n", p0+1, *p0);
    printf("Char Address + 1 = %d, Value + 1 = %d \n", p0+1, *(p0+1));
    //1025 = 0000 0000 0000 0000 0000 0100 0000 0001
    return 0;
}
