/* C Programming
Comparing the words
*/

#include <stdio.h>
int main(void)
{
    char word1[50];
    char word2[50];
    int i = 0;
    scanf("%s", word1);
    scanf("%s", word2);
    while (word1[i] != '\0' && word1[i] != '\0' && word1[i] == word2[i])
        i++;
    if (word1[i] < word2[i])
        printf("%s comes before %s", word1, word2);
    else if (word1[i] > word2[i])
        printf("%s comes after %s", word1, word2);
    else
        printf("Same word twice");

    return 0;
}
