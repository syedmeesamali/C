/* C Programming - FUNCTIONS
Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the
sum of the digits of a number. To do so, your main function should first read an integer number as
input and then call sumOfDigits(), which should in turn call itself until there are no digits left to sum,
at which point the final sum should display to the user.

Here is the main idea of how the recursion in sumOfDigits() should work:
sumOfDigits(6452) = 2 + sumOfDigits(645)
sumOfDigits(645) = 5 + sumOfDigits(64)
...
sumOfDigits(6) = 6
Input: 47253
Output: 21
*/

#include <stdio.h>
int sumOfDigits(int);     //Function definition for factorial
int main(void)
{
    int n, sumDigits, i;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("%d is negative !!", n);
    } else
    {
       sumDigits = sumOfDigits(n);
       printf("%d", sumDigits);
    }
    return 0;
} //End of main function

//Recursive function for factorial
int sumOfDigits(int n)
{
    int result = 0;
    int rem = 0;
    if (n==0)
    {
        result = 0;
    } else
    {
        rem = n % 10;
        n = n / 10;
        result = rem + sumOfDigits(n);
    }
    return result;
}
