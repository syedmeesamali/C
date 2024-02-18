#include<stdio.h>
int main()
{
    char words[3][10];      //3 words with max length as 10
    for (int i=0; i<3; i++)
    {
        scanf("%s", words[i]);
    }

    printf("You entered: ");
    for (int j=0; j<3; j++)
    {
        printf("%s", words[j]);
    }
    return 0;
}
