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
    printf("%d variable stored at address %p & j at %p \n", i, iAddr, jAddr);
    printf("%d variable stored at address at %p \n", k, kAddr);

	return 0;
}
