/* C Programming - Longest word in strings
Your job is to find the length of the longest word in a text with no punctuation or special characters of any
kind - only contains words. To do so, please write a C-program that takes as a input first the number of words
in a text, followed by all of the words in the text. The output of your program should be the length of the longest word in the text.
To simplify your program, you can assume that the longest word will not exceed 100 characters.
*/

#include <stdio.h>
int main(void)
{
    int numWords = 0;
    int l = 0;
    int sum = 0;
    char word[100];
    scanf("%d", &numWords);
    int i = 0;
    for (i=0; i<numWords; i++)
    {
        scanf("%s", word);
        l = 0;
        while (word[l] != '\0')
        {
            l++;
        }
        if (sum < l)
        {
            sum = l;
        } else
        {
            sum = sum;
        }
    }
    printf("%d", sum);
    return 0;
}
