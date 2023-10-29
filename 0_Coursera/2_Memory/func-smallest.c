/* C Programming - FUNCTIONS
The goal of this problem is to find the smallest integer in a list of numbers.
To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers
(be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two.
This function will use an if statement with a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum.
The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer
values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.
Example:
Input: 10
4 3 6 2 6 8 9 8 5 4
Output: 2
*/

#include <stdio.h>
int min(int x, int y); //Function definition
int main(void)
{
    int values = 0;
    int less = 0;
    scanf("%d", &values);
    int nums[values];
    for (int i=0; i<values; i++)
    {
        scanf("%d", &nums[i]);
    }
    less = min(nums[0], nums[1]);
    for (int j=0; j<values-1; j++)
    {
        less = min(less, nums[j+1]);
    }
    printf("%d", less);
    return 0;
} //End of main function


//Function - Find smallest integer
int min(int x, int y)
{
    int small = 0;
    if (x > y)
    {
        small = y;
    } else
    {
        small = x;
    }
    return small;
}
