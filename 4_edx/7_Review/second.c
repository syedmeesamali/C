#include<stdio.h>
int main(void)
{
    int numbEntered;
    int arrayResult[10] = {0};
    int arrSize = sizeof(arrayResult) / sizeof(arrayResult[0]); //Get number of elements an array can hold
    printf("Array size is %d\n", arrSize);
    int counter = 0;
    for (counter = 0; counter < arrSize; counter++)
    {
        printf("\nEnter a number (-1) to exit! ");
        scanf("%d", &numbEntered);
        if (numbEntered != -1)
        {
            printf("\nNumber is fine and will be appended to array. (-1) to quite!");
            arrayResult[counter] = numbEntered;
        } else
        {
            printf("\nThanks for playing. Result is below!");
            break;
        }
    }
    printf("\n\nResult of entered numbers as squares!\n");
    if (counter <= 0)
    {
        printf("\nNo result was entered!");
    } else
    {
        for (int i=0; i < counter; i++)
        {
            printf("\n %d  ---------  %d ", arrayResult[i], arrayResult[i] * arrayResult[i]);
        }
    }
    return 0;
}
