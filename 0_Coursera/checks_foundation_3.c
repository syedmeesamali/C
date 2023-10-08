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
    /*
    int i;
    int numberOfHazelnuts = 0;
    int distanceTraveled = 0;
    for(i = 0; i < 9 ; i++)
    {
        printf("At %d miles I have %d hazelnuts.\n", distanceTraveled, numberOfHazelnuts);
        distanceTraveled = distanceTraveled + 1;
        numberOfHazelnuts = numberOfHazelnuts + 3;
    }
    */
    int i = 0;
    //Print the table for 8 multiplication
    for (i = 0; i <= 10; i++)
    {
        printf("%dx8 = %d\n", i, i*8);
    }
    return 0;
}
