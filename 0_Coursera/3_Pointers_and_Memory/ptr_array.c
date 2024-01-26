#include<stdio.h>
int main()
{
    int arr[] = {3, 5, 7, 9, 11, 13};
    int *ptr = arr;
    printf("First element of array is %d\n", arr[0]);
     *ptr = 0;
    printf("Now after change First element of array is %d\n", arr[0]);
   return 0;
}
