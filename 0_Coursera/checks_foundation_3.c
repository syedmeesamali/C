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
    int i, tab;
    printf("Enter number!");
    scanf("%d", &tab);
    printf("Hello %d", tab);
    for (i=0; i<=tab; i++)
    {
        printf("%dx%d\ = %d\n", i, tab, i*tab);
    }
    return 0;
}
