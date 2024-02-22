#include<stdio.h>
int main()
{
    char words[5][10];
    int i, j;
    for (i=0; i<5; i++)
    {
        scanf("%s", &words[i][10]);
    }
    printf("\nWords as reversed are: \n");
    for (i=5; i>=0; i--)
    {
        printf("%s ", words[i]);
    }
    return 0;
} //End of program
