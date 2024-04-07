//Demo for the classic merge sort algorithm in C language
#include<stdio.h>
void merge_sort(int a[], int x);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted(int a[], int l, int m, int r);
int main()
{
    int array[] = {1, 5, 9, 18, 6, 10, 13, 24, 29};
    int len = 9;
    for (int i=0; i<len; i++)
    {
        printf("\n%d\n", array[i]);
    }
    merge_sort(array, len);
    return 0;
}

//Merge sort implementation
void merge_sort(int a[], int x)
{
    merge_sort_recursion(a, 0, x-1);
}

//Merge sort recursion 
void merge_sort_recursion(int a[], int l, int r)
{
    if (l < r)
    {
    int m = l + (r - l) / 2;
    merge_sort_recursion(a, l, m);
    merge_sort_recursion(a, m+1, r);
    }
}

//Merge the sorted arrays finally
void merge_sorted(int a[], int l, int m, int r)
{
    int left_len = m - l + 1;
    int right_len = r - m;
    int temp_left[left_len];
    int temp_right[right_len];
    int i, j, k;
    for (int i=0; i<left_len; i++)
    {
        temp_left[i] = a[l+i];
        printf("\ntemp_left[%d] = %d",i, temp_left[i]);
    }
    for (int i=0; i<right_len; i++)
    {
        temp_right[i] = a[m+1+r];
        printf("\ntemp_right[%d] = %d",i, temp_right[i]);
    }
    printf("\nCurrent end of program - \n");
}
