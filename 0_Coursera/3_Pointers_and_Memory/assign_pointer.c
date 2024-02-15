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
    totalWet = cookie[0][0] + cookie[0][1];
    printf("Total amount of wet ingredients: %.2lf grams.\n", totalWet);
    totalDry = cookie[1][0] + cookie[1][1] + cookie[1][2];
    printf("Total amount of dry ingredients: %.2lf grams.\n", totalDry);
    ratio = totalDry / totalWet;
    printf("Ration of wet to dry ingredients: %.2lf grams.\n", ratio);
    *(*(cookie)+0) = totalWet / 2.0;
    *(*(cookie)+1) = totalWet / 2.0;
    totalWet = *(*(cookie)+0) + *(*(cookie)+1);
    printf("New water amount: %.2lf grams, new oil amount: %.2lf grams.\n",wet[0], wet[1]); 
    return 0;
}
