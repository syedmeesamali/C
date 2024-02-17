/*Strings are pointer arrays with pointers for each item.
Each string is null terminated so for 4 letter string we need 5 spaced array. */

#include<stdio.h>
int main()
{
    char a[4];
    char b[5];
    char c[9];
    char * words[3] = {a, b, c};
    printf("\nEnter a word with most 3 letters: ");
    scanf("%s",a);
    printf("\nEnter a word with most 4 letters: ");
    scanf("%s",b);
    printf("\nEnter a word with most 8 letters: ");
    scanf("%s",c);
    return 0;
}
