/* C Programming - Repeat Letters
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word.
Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should
iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making
sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input
has no more than 50 letters, and that the word is all lowercase.
*/

#include <stdio.h>
int main(void)
{
    char word[50];          //Input word from user
    scanf("%s", word);      //Read the word
    int pos = 0;            //Starting position of word
    int i = 0;
    int count = 0;
    char c = 0;
    char d = 0;
    while (word[i] != '\0')
    {
        c = word[i];
        d = word[i+1];
        i++;
        if (c == d)
        {
            count++;
        }
    }
    printf("%d", count);
    //printf("\a");           //Bell sound
    return 0;
}
