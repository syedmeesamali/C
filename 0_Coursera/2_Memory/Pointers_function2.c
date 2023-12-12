/* C Programming - MEMORY
Pointers in C - First ever lecture from the Coursera Course - 25/11/2023
Deferencing a pointer in C - 26/11
Pointers as functions - 28/11
Pointer functions 2 - 29/11
*/

#include <stdio.h>
void addThree(int *);
int main(void)
{
    int a = 5;
    addThree(&a);
    printf("Inside main value of a = %d", a);
    return 0;
} //End main

//Function definition here
void addThree(int * a)
{
    * a = * a + 3;
    printf("Inside function value of a is %d\n", * a);
}
