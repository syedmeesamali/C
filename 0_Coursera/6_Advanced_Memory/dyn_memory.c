#include<stdio.h>
#include<stdlib.h>
int main()
{
    int * ptr;      //Pointer for the block of memory in HEAP for pointer variable
    ptr = (int *) malloc(sizeof(int));
    *ptr = 15;
    printf("%d is allocated in heap at address %p\n", *ptr, ptr);
    free(ptr);          //Always free space after using it
    printf("%d is allocated in heap at address %p\n", *ptr, ptr);
    return 0;
}
