/* C Programming - MEMORY
Within this program, we will pass an array with 6 integers to a function, have the function swap
the first and last integer, the second and the second to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). It should take one parameter,
representing the array of integers.

The main function first reads 6 integers from the input, and assigns them to the array. The main
function then calls reverseArray, passing the array as an argument.

The main function then prints the reversed array.
Input: 1 2 3 4 5 6
Output: 6 5 4 3 2 1
*/

#include <stdio.h>
void reverseArray(int * ptr);

int main(void)
{
	int array[] = {4, 6, 12, -5, -7, 3};
	printf("\nNew Array: %d, %d, %d, %d, %d, %d", array[0], array[1], array[2], array[3], array[4], array[5]);
	reverseArray(array);
	printf("\nNew Array: %d, %d, %d, %d, %d, %d", array[0], array[1], array[2], array[3], array[4], array[5]);
	printf("\n Last value: %d", array[6-1]);
	return 0;
}

//Main array reverse function
void reverseArray(int * ptr)
{
    int swap = * (ptr + 5);
    * (ptr + 0) = swap;
}
