/* C Programming - POINTERS and MEMORY Management Course 4
Seeing how variables are stored in memory and how to access them.
*/
#include <stdio.h>
int main(void)
{
	int i = 42;
    int j = 52;
    int * iAddr = &i;
    int * jAddr = &j;
    printf("%d variable stored at address %p! \n", *iAddr, iAddr);
    printf("%d variable stored at address at %p \n", *jAddr, jAddr);
    doubleThem(iAddr, jAddr);
	return 0;
}

void doubleThem(int *iptr, int *aptr)
{
    int *bptr = iptr;
    int *cptr = aptr;
    *bptr = *bptr * (*bptr);
    *cptr = *cptr * (*cptr);
    printf("Values after SQUARE function = %d and %d", *iptr, *aptr);
}

