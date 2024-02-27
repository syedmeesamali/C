//malloc is used for memory allocation in HEAP
//Static memory is usually allocated in STACK

#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *ptr;       //Static memory allocation
    ptr = malloc(5 * sizeof(int)); //Reserve space for 5 int vars
    if (ptr != NULL)
    {
        printf("Memory created successfully!\n");       //Memory check
    }
    
    return 0;
} //ENd of main
