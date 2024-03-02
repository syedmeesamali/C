#include<stdio.h>
#include<stdlib.h>
int main()
{
    int * array;
    array = (int *) malloc(5 * sizeof(int));
    array[0] = 15;
    array[1] = 23;
    *(array + 2) = 18;
    *(array + 3) = 25;
    *(array + 4) = 6;
    for (int i=0; i<5; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");
    return 0;
}
