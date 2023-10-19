/* C Programming - Find letter in string
You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T'
in the first half of the word (including the middle letter if there is one). Specifically, if the first half of
the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the
letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T'
in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.

*/

#include <stdio.h>
int main(void)
{
    char word[50];
    int i = 0;
    int count = 0;
    int t_Index = 0;
    int yes = 0;
    scanf("%s", word);
    while (word[i] != '\0')
    {
        if (word[i] == 't' || word[i] == 'T')
        {
            yes = 1;
            t_Index = i;
        }
        count++;
        i++;
    }
    if (yes)
    {
        if (t_Index <= (count / 2))
        {
            printf("1");
        } else
        {
            printf("2");
        }
    } else
    {
        printf("-1");
    }
    return 0;
}
