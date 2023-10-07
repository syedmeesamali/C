/* C Programming
Foundation checks (First course of 7 part series)
Variable names can use:
    lowercase and uppercase letters (characters) and digits
    do not use special characters like @ # & " ...
    do not use accented characters like é è à ...
    do not start with a digit
    start only with a letter
    spaces are forbidden
     _ may be used instead of a space in the name of the variable
    YouCanUseUppercaseLettersBetweenWordsInsteadOfSpaces

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
