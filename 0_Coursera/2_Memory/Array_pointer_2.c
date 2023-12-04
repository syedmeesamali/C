/* C Programming - MEMORY
Arrays are POINTERS
*/

#include <stdio.h>
int main(void)
{
    int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};
    printf("%p\n", array);
    printf("First element is %d\n", array[0]);

    //Lets capture the values from array pointer
    int *ptr1, *ptr2;
    ptr1 = array + 2;
    ptr2 = &ptr1[5];

    //* ptr = 2;      //Now first element will be replaced
    printf("Value of *(ptr1+1) is %d", *(ptr1 + 1));
    printf("Value of *(ptr2-3) is %d", *(ptr2 - 3));
    return 0;
}

