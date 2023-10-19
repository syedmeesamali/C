/* C Programming - Repeat Letters
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word.
Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should
iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making
sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input
has no more than 50 letters, and that the word is all lowercase.
*/

//Ref checks: erroneousnesses - Result = 5

#include <stdio.h>
int main(void)
{
    char word[50];          //Input word from user
    char sorted[50];        //Final sorted word
    scanf("%s", word);      //Read the word
    int i = 0, j = 0;
    int len = 0;
    int count = 0;
    int check_count = 0;
    char c = 0;
    int letter_count = 0;
    int characterCount[26] = {0};

    //First let's get length of word
    while (word[i] != '\0')
    {
        sorted[i] = word[i];
        len++;
        i++;
    }

    //Bubble sort the word
    for (j=0; j<len-1; j++)
    {
        for (i=0; i<len-1; i++)
        {
            if (sorted[i] > sorted[i+1])
            {
                c = sorted[i];
                sorted[i] = sorted[i+1];
                sorted[i+1] = c;
            }
        }
    }

    //Now count characters in a sequence
    for (j = 0; sorted[j] != '\0'; j++)
    {
        c = sorted[j];
        if (c >= 'a' && c <= 'z')
        {
            characterCount[c - 'a']++;
        }
    }

   //Get the array size
   for (int i = 0; i < 26; i++)
    {
        if (characterCount[i] > 1)
        {
            count++;
            //printf("Character %c appears %d times.\n", 'a' + i, characterCount[i]);
        }
    }
    printf("%d", count);
    //printf("\a");           //Bell sound
    return 0;
}
