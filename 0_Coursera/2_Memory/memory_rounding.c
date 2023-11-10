/* C Programming - MEMORY
Rounding issues in C
*/

#include <stdio.h>
int main(void)
{
    double a = 0.25;
    double b = 0.30;
    printf("Num a = %0.30lf\n", a);
    printf("Num b = %0.15lf\n", b);
    printf("Num b = %0.20lf\n", b);
    printf("Num b = %0.30lf\n", b);
    printf("Num b = %0.40lf\n", b);
    return 0;
} //End of main
