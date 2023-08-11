/* C Programming - Words and Chars
Write a C-program that prints out a word as many times as specified. The number of repetitions and the word
should be given as input to the program. You may assume that the word has no more than 100 characters (be sure
to also reserve space for the null terminator, \0, though!).
*/

#include <stdio.h>
int main(void)
{
    int times = 0;
    char word[50];
    scanf("%d %s", &times, word);
    for (int i=0; i<times; i++)
    {
        printf("%s\n", word);
    }
    return 0;
}
