/* C Programming - MEMORY
Pointers in C - First ever lecture from the Coursera Course - 25/11/2023
Deferencing a pointer in C - 26/11
*/

#include <stdio.h>
int main(void)
{
    double d = 53.94;
    char c = 'r';

    double * addressOfD = &d;
    char * addressOfC = &c;

    printf("At the address of %p there is a value of %0.2lf", addressOfD, * addressOfD);
    printf("At the address of %p there is a value of %c", addressOfC, * addressOfC);

} //End main
