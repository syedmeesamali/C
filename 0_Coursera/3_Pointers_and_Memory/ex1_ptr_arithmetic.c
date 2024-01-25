#include<stdio.h>
int main()
{
    
    int nums[] = {4, -1, 8, 3, 0, -11};
    printf("First in array is %d \n", nums[0]);
    printf("5th will be like *(nums+4) = %d \n", *(nums+4));
    printf("Without parentheses it will be *nums + 4 = %d \n", *nums + 4);
    int *ptr;
    ptr = nums + 2;
    ptr++;
    printf("*ptr will be now %d \n", *ptr);
    return 0;
}
