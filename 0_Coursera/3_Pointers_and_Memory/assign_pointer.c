#include<stdio.h>
int main(void)
{
    double totalWet, totalDry, ratio;
    double wet[2];
    double dry[3];
    double * cookie[2] = {wet, dry};
    //Take input
    scanf("%lf %lf", &wet[0], &wet[1]);
    scanf("%lf %lf %lf", &dry[0], &dry[1], &dry[2]);
    printf("Total amount of wet ingredients: %.2lf grams.\n", totalWet);
    return 0;
}
