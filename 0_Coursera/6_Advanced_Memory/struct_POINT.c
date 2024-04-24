/* C Advanced Programming - Datatypes
Structs in C and how they connect with Functions.
*/
#include <stdio.h>
struct point
{
    int x;
    int y;
};

//Main function
int main(void)
{
	struct point z;
	readPoint(&z);
	printPoint(z);
	return 0;
}

//Function reading pointer
void readPoint(struct point * ptr)
{
    printf("\nEnter values for pointer!\n");
    printf("Pointer x is: ");
    scanf("%d", &(ptr -> x));
    printf("Pointer y is: ");
    scanf("%d", &(ptr -> y));
}

//Function printing the pointer
void printPoint(struct point pt)
{
    printf("\n x: %d, y: %d\n", pt.x, pt.y);
}
