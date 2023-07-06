#include<stdio.h>
int main()
{
    int time = 0;
    int cost = 10;
    scanf("%d", &time);
    cost = cost + time * 5;
    if (cost < 53)
    {
      printf("%d\n", cost);
    } else 
    {
      printf("53\n");
    }
    return 0;
} //End of exercise-2 program - C Course - Coursera
