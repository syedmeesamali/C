#include<stdio.h>
int main()
{
    int Pass = 0;
    double cost = 0.0;
    scanf("%d %lf", &Pass, &cost);
    int alone = (Pass == 0);
    if (alone)
    {
      printf("%.2lf", cost);
    } else {
      cost = cost + 1;
      printf("%.2lf\n", cost / (Pass + 1));
    }
    return 0;
} //End of exercise-1 program - C Course - Coursera
  
