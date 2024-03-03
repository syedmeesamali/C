#include<stdio.h>
#include<stdlib.h>
int * allocateIntArray(int);
double findAverage(int *, int);

int main()
{
    int num, i;
    int * array;
    double average;
    printf("How many grades you want to enter?");
    scanf("%d", &num);
    array = allocateIntArray(num);      //Allocate bytes as per the elements required
    printf("Please enter %d grades: ", num);
    for (i=0; i<num; i++)
    {
        scanf("%d", array+i);
    }
    average = findAverage(array, num);
    printf("\nAverage value is %lf\n", average);
    return 0;
}

//The function to allocate array memory bytes
int * allocateIntArray(int num)
{
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}

//Find average function to get the average using pointers
double findAverage(int * array, int num)
{
    int i;
    double average = 0.0;
    for (i=0; i<num; i++)
    {
        average += array[i];
    }
    average = average / num;
    return average;
}
