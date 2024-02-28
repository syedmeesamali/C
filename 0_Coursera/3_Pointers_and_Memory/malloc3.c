//malloc is used for memory allocation in HEAP
//Static memory is usually allocated in STACK

#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *ptr;       //Static memory allocation
    ptr =(int *) malloc(sizeof(int)); //Reserve space for 5 int vars
    *ptr = 15;
    printf("The number stored is %d at memory location %p\n", *ptr, ptr);
    free(ptr);      //This will release the memory or FREE it up.
    printf("I stored %d at memory %p ?? \n", *ptr, ptr);
    return 0;
} //ENd of main
