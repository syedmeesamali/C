#include<stdio.h>
#define SIZE 10

//Bubble sort in C

int main()
{
    int a[SIZE] = {2, 9, 4, 5, 11, 7, 8, 3, 10, 6};
    int i;      //Counter
    int pass;   //Outer count
    int hold;   //Inner count
    printf("Data items in original order: \n");
    for (i=0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n Prepare for bubble sorting!\n");
    for (pass=0; pass < SIZE; pass++)
    {
        for (i=0; i < SIZE-1; i++)
        {
            if (a[i] > a[i+1])
            {
                hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
                printf("\nItem %d is now %d !", i+1, a[i]);
            }
        }
    }
    printf("\nItems after BUBBLE SORT!\n");
    for (i=0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
