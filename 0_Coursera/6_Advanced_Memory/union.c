#include<stdio.h>
union number 
{
    int x;
    double y;
}; //End union number

int main()
{
    union number value;
    value.x = 100;
    value.y = 100.0;
    printf("\nint = %d, double = %lf\n", value.x, value.y);
    return 0;
}
