/* C Programming - POINTERS and MEMORY Management Course 4
Seeing how variables are stored in memory and how to access them.
*/
#include <stdio.h>
void swap(char *x, char *y);
int main(void)
{
	char c = 'P';
	char d = 'T';
	printf("%c - %c\n", c, d);
	swap(&c, &d);
	printf("%c - %c\n", c, d);
	return 0;
}

//Main swap function
void swap(char *x, char *y)
{
    char *temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Values after SWAP function = %c and %c\n", *x, *y);
}

