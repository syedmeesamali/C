/* C Programming
Foundation checks (First course of 7 part series)
*/

#include <stdio.h>
int main(void)
{
    int balance;
    balance = 50;       //starting value
    printf("I have %d dollars in my account!\n", balance);
    //Expense of 40
    balance = balance - 40;
    printf("I have %d dollars in my account!\n", balance);
    balance = balance + 20;
    printf("I have %d dollars in my account!\n", balance);
    return(0);
}
