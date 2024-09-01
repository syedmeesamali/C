#include<stdio.h>
int main(void)
{
    int a, b;
    b = -8;
    //DO NOT USE (a==b) here as it's different case
    if ((a=b) != 0) //Clear comparison of a assigned to b and check if ZERO
    {
        puts("Value assigned! Comparison NOT ZERO !");
    } else
    {
        puts("Nothing! Value is zero !");
    }
    return 0;
}
