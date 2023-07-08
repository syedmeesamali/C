#include<stdio.h>
int main()
{
    int age = 0;
    int weight = 0;
    scanf("%d", &age);
    scanf("%d", &weight);
    if (age == 60)
    {
        printf("0");
    } else if (age <= 10)
    {
        printf("5");
    } else
    {
        if (weight < 20)
        {
            printf("30");
        } else
        {
            printf("40");
        }
    }
    return 0;
}
