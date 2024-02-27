#include<stdlib.h>
#include<stdio.h>
int main()
{
    int * intptr;
    double * dblptr;
    intptr = (int *) malloc(sizeof(int));
    dblptr = (double *) malloc(sizeof(double));
    printf("Pointer for int is at: %p\n", intptr);
    printf("Pointer for double is at: %p\n", dblptr);
    return 0;
}
