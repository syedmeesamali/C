#include<stdio.h>
int main()
{
    char words[68][40];
    int i, j;
    for (i=0; i<68; i++)
    {
        scanf("%s", &words[i][40]);
    }
    //Print the reverse below
    for (i=67; i>=0; i--)
    {
        printf("%s ", words[i]);
    }
    return 0;
} //End of program
