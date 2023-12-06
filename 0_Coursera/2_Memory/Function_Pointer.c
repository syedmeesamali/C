/* C Programming - MEMORY
Pointer Functions
*/

#include <stdio.h>
void Reset(int *);
int main(void)
{
    int arr[] = {3, 4, 5};
    printf("\n1st, 2nd and 3rd elements of array before reset! \n");
    printf("%d, %d, %d", arr[0], arr[1], arr[2]);
    Reset(arr);
    printf("\n1st, 2nd and 3rd elements of array after reset! \n");
    printf("%d, %d, %d", arr[0], arr[1], arr[2]);
    return 0;
}

//Function reset
void Reset(int * ptr)
{
    * ptr = 0;              //1st element
    * (ptr + 1) = 0;        //2nd element
    * (ptr + 2) = 0;        //3rd element
}

