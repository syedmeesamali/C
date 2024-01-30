#include<stdio.h>
void reverseArray(int *, int);
int main()
{
    int arr[] = {3, 5, 7, 9, 11, 13};
    int n = 6;
    for (int i=0; i<5; i++)
    {
        printf("arr[%d] = %d || ", i, arr[i]);
    }
    printf("arr[%d] = %d", 5, arr[5]);
    reverseArray(arr, 6);
    return 0;
}

//Reverse the array function
void reverseArray(int *ptr, int n)
{
    printf("\nReversed array!\n");
    for (int i=5; i>0; i--)
    {
        printf("arr[%d] = %d || ", i, *(ptr+i));
    }
    printf("arr[%d] = %d", 0, *(ptr+0));
}
