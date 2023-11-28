/* C Programming - MEMORY
Pointers in C - First ever lecture from the Coursera Course - 25/11/2023
Deferencing a pointer in C - 26/11
Pointers as functions - 28/11
*/

#include <stdio.h>
void swap(int *, int *);
int main(void)
{
    int a = 9;
    int b = 5;
    swap(&a, &b);
    printf("%d is a now and %d is b", a, b);
    return 0;
} //End main


void swap(int * a, int * b)
{
    int tmp = * a;
    * a = * b;
    * b = tmp;
}
