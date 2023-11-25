/* C Programming - MEMORY
Pointers in C - First ever lecture from the Coursera Course - 25/11/2023
*/

#include <stdio.h>
int main(void)
{
    int a = 42;
    double d = 53.94;
    char c = 'r';

    int * addressOfA = &a;
    double * addressOfD = &d;
    char * addressOfC = &c;

    printf("Value of a is %d\n", a);
    printf("Address of a is %p\n", addressOfA);

    printf("Value of d is %lf\n", d);
    printf("Address of a is %p\n", addressOfD);

    printf("Value of a is %c\n", c);
    printf("Address of a is %p\n", addressOfC);
} //End main
