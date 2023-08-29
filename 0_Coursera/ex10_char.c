/* C Programming - Words and Chars
Null character.
*/
#include <stdio.h>
int main(void)
{
    char word1[5];
    char word2[8];
    scanf("%s %s", word1, word2);
    word1[3] = '\0'; //This is a word termination character.
    word2[2] = '\0';
    printf("%s %s\n", word1, word2);
    return 0;
}
