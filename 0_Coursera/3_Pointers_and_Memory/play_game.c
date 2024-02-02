#include<stdio.h>
void behind(int *, int);

int main()
{
    int i = 5;
    int arr[10];
    int N, x;
    scanf("%d", &N);
    for (x=0; x<N; x++)
    {
        scanf("%d", &arr[x]);
    }
    behind(arr, N);
    for (x=0; x<N; x++)
    {
        printf("%d\n", arr[x]);
    }
    return 0;
}

//Main behind function
void behind(int *ptr, int x)
{
    int max = *ptr;
    for (int i=0; i<x; i++)
    {
        if (*(ptr+i) > max)
        {
            max = *(ptr + i);
        }
    }
    printf("End from array and max is %d!\n", max);
}
