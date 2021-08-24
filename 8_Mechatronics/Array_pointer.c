#include<stdio.h>
int SumOfElements(int *a, int size)
{
    int i, sum = 0;
    printf("\nSize of a: %d, Size of a[0] = %d", sizeof(a), sizeof(a[0]));
    for (i=0; i<size; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int a[4] = {5, 7, 8, 4};
    int size = sizeof(a) / sizeof(a[0]);
    int total = SumOfElements(a, size);
    printf("\nSum of elements in array: %d", total);
    printf("\nSize of A: %d, Size of a[0] = %d", sizeof(a), sizeof(a[0]));
    return 0;
}
