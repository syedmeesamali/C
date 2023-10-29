/* C Programming - FUNCTIONS
Find a factorial using RECURSION
*/

#include <stdio.h>
int main(void)
{
    int n, fact, i;
    printf("Please enter positive integer: ");
    scanf("%d", &n);
    fact = 1;
    for (i = 1; i<=n; i++)
    {
        fact = i * fact;
    }
    if (n < 0)
    {
        printf("%d is negative !!", n);
    } else
    {
       printf("Factorial of %d is %d", n, fact);
    }

    return 0;
} //End of main function
