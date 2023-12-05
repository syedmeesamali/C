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
    ptr1 = array + 2;       //3rd element (as 1st will be ptr1 = array
    ptr2 = &ptr1[5];        //starting at 3rd take 5 more to right so 8th element

    //* ptr = 2;      //Now first element will be replaced
    printf("Value of *(ptr1+1) is %d\n", *(ptr1 + 1));
    printf("Value of *(ptr2-3) is %d\n", *(ptr2 - 5));
    return 0;
}

