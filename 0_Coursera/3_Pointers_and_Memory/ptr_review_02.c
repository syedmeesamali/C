/* C Programming - POINTERS and MEMORY Management Course 4

*/

#include <stdio.h>
int doubleArray(int[]);
int main(void)
{
	int array[] = {4, 6, 12};
	scanf("%d %d %d", &array[0], &array[1], &array[2]);
	doubleArray(array);
	printf("\n%d %d %d", array[0], array[1], array[2]);
	return 0;
}

//function
int doubleArray(int a[])
{
    a[0] = a[0] * 2;
    a[1] = a[1] * 2;
    a[2] = a[2] * 2;
}
