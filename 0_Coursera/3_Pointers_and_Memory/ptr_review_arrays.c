/* C Programming - POINTERS and MEMORY Management Course 4

*/
#include <stdio.h>

int main(void)
{
	int arr[3] = {3, 4, 5};
	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
	int *ptr = arr;        //Get address of array
	int *ptr1 = &arr[0];
	printf("Loc1 = %p, Loc2 = %p \n", ptr, ptr1);
	printf("Loc for 2nd arr val = %p \n", (ptr + 1));
	*(ptr + 1) = 6;
	printf("Changed 2nd to %d \n", arr[1]);
	*(ptr + 2) = 7;
	printf("Changed 3rd to %d \n", arr[2]);
	printf("Final array: {%d %d %d} \n", arr[0], arr[1], arr[2]);
	return 0;
}


