/* C Programming - MEMORY
Arrays are POINTERS
*/

#include <stdio.h>
int main(void)
{
    int arr[3] = {10, 11, 12};
    printf("%p\n", arr);
    printf("First element is %d\n", arr[0]);

    //Lets capture the values from array pointer
    int * ptr = arr;
    * ptr = 2;      //Now first element will be replaced
    printf("First element is %d\n", arr[0]);

    return 0;
}

