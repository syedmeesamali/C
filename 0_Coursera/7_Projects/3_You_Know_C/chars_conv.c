#include<stdio.h>
int main()
{
    unsigned char a;
    int b;
    long c;
    for (b=120; b<=135; b++)
    {
        //Converting one type to another by explicit assignment
        a = b;
        c = a;
        printf("%4d %4d %4ld \n", a, b, c);
    }
    return 0;
}
