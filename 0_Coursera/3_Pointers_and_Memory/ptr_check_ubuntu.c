#include<stdio.h>
int main()
{
 int arr[2] = {1, 2};
 int *ptr = arr;
 printf("Array loc = %p", &arr);
 printf("Pointer says = %p", ptr);
 return 0;
}
