/* C Programming - POINTERS and MEMORY Management Course 4
Seeing how variables are stored in memory and how to access them.
*/
#include <stdio.h>
int main(void)
{
    int i = 42;
    int j = 52;
    int k = 52;
    int * iAddr = &i;
    int * jAddr = &j;
    int * kAddr = &k;
    double b = 3.141;
    double * dAddr = &b;
    char c = 'M';
    char * cAddr = &c;
    printf("%d variable stored at address %p & j at %p \n", i, iAddr, jAddr);
    printf("%d variable stored at address at %p \n", k, kAddr);
    printf("%lf double stored at address at %p \n", b, dAddr);
    printf("%c character stored at address at %p \n", c, cAddr);
    myFunction(iAddr, dAddr, cAddr);
	return 0;
}

void myFunction(int *iptr, double *aptr, char * cptr)
{
    printf("Function received address: %p, %p and %p", iptr, aptr, cptr);
}
