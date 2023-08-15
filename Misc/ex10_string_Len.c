/* C Programming - Length of strings

*/

#include <stdio.h>
int main(void)
{
    char word[50];
    int i = 0;
    printf("Enter a word: ");
    scanf("%s", word);
    while (word[i] != '\0')
    {
        printf("word[%d] = %c\n", i, word[i]);
        i++;
    }
    printf("\nWord length is %d", i);

    return 0;
}
