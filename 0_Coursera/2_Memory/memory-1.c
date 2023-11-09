/* C Programming - MEMORY
Memory types and sizes
*/

#include <stdio.h>
int main(void)
{
    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];
    printf("Size of char c is %zu\n", sizeof(c));
    printf("Size of int i is %zu\n", sizeof(i));
    printf("Size of double d is %zu\n", sizeof(d));
    printf("Size of list-c is %zu\n", sizeof(listChar));
    printf("Size of list-int is %zu\n", sizeof(listInt));
    printf("Size of list-double is %zu\n", sizeof(listDouble));
    return 0;
} //End of main
