#include<stdio.h>
int main(void)
{
    int ratingCounter[11], i, response;
    for (i=1; i<=10; i++)
        ratingCounter[i] = 0;

    printf("Enter your response!\n");
    for (i=0; i<=20; i++)
    {
        scanf("%i", &response);
        if (response < 1 || response > 10)
            printf("Bad response %i! Enter between 1 to 10", response);
        else
            ++ratingCounter[response];
    }
    printf("\n\nRating  ----------  Number of responses\n");
    for (i = 1; i <= 10; i++)
        printf("%4i ----------- %4i\n", i, ratingCounter[i]);
    return 0;
}
