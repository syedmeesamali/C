#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Freeing the memory\n");
    int * a;                        //Integer pointer
    a = (int *) malloc(sizeof(int));        //Declare some memory for this pointer
    *a = 15;
    printf("Value of a is %d and saved at memory location %p\n", *a, a);
    free(a);
    printf("Value of a is %d and saved at memory location %p\n", *a, a);
    return 0;
}
