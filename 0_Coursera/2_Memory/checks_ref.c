/* C Programming - MEMORY
Checks only
*/

#include <stdio.h>
int add(int a, int b);
int main(void)
{
    int a = 5;
    int b = 7;
    a = add(a, b);
    printf("%d", a);
    return 0;
} //End of main

//Addition function
int add(int a, int b)
{
    int c = 2;
    return(c*a+b);
}
