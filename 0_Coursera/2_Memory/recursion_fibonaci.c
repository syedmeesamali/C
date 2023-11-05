/* C Programming - FUNCTIONS
Fibonacci numbers using Recursion
*/

#include <stdio.h>
int fibonaci(int);     //Function definition for factorial
int main(void)
{
    int n, fib, i;
    printf("Please enter positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("%d is negative !!", n);
    } else
    {
       fib = fibonaci(n);
       printf("Fibonacci of %d is %d", n, fib);
    }
    return 0;
} //End of main function

//Recursive function for factorial
int fibonaci(int n)
{
    int result = 0;
    if (n == 1)
    {
        result = 0;
    } else if (n == 2)
    {
        result = 1;
    } else
    {
        result = fibonaci(n - 1) + fibonaci(n - 2);
    }
    return result;
}
