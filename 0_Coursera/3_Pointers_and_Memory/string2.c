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
        printf("%s ", words[j]);
    }
    
    printf("\nFirst letters!\n");
    for (int i=0; i<3; i++)
    {
        printf("First letter of %s is %c\n", words[i], words[i][0]);
    }
    return 0;
}
