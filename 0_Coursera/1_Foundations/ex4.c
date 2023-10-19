#include<stdio.h>
int main()
{
    int players = 0;
    int weights = 0;
    int sum_1 = 0;
    int sum_2 = 0;
    scanf("%d", &players);
    for (int i=1; i<= players*2; i++)
    {
        scanf("%d", &weights);
        if (i % 2 == 0)
        {
            sum_2 = sum_2 + weights;
        } else
        {
            sum_1 = sum_1 + weights;
        }
    }

    if (sum_1 > sum_2)
    {
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n", sum_1);
        printf("Total weight for team 2: %d\n", sum_2);
    } else
    {
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n", sum_1);
        printf("Total weight for team 2: %d\n", sum_2);
    }
    return 0;
}
