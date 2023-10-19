/* C Programming - Memory Management
- Start of new course # 3 (Modular programming & memory management)
*/
#include <stdio.h>
int main(void)
{
    int a = 240;
    int *p;
    printf("Value of a = %d\n", a);
    printf("Uninitialized pointer value is %p\n", p);
    p = &a;         //p stores the address of variable a
    printf("Initialized pointer value is %p\n", p);
    printf("Value at address pointed by p is %d\n", *p);
    *p = 300;
    printf("New value of a is %d\n", a);
    return 0;
}
