#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}


int main()
{
    int a; int b; int sum;
    printf("Review of C again!");
    printf("Enter first number!");
    scanf("%d", &a);
    printf("Enter second number!");
    scanf("%d", &b);
    sum = add(a,b);
    printf("Sum is %d", sum);
    return 0;
}

