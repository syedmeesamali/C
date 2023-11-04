/* C Programming - FUNCTIONS
Find a factorial using RECURSION
*/

#include <stdio.h>
int factorial(int);     //Function definition for factorial
int main(void)
{
    int n, fact, i;
    printf("Please enter positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("%d is negative !!", n);
    } else
    {
       fact = factorial(n);
       printf("Factorial of %d is %d", n, fact);
    }
    return 0;
} //End of main function

//Recursive function for factorial
int factorial(int n)
{
    int result = 0;
    if (n==0)
    {
        result = 1;
    } else
    {
        result = n * factorial(n-1);
    }
    return result;
}
