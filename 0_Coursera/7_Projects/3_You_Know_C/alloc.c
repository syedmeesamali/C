#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr = 10;
    ptr = (int *)malloc(10 * sizeof(int));  
    for (int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        ptr = &arr[i];
    }
    for (int i=0; i<10; i++)
    {
        printf("%d %p\n", arr[i], *ptr[i]);
    }
    return 0;
}
