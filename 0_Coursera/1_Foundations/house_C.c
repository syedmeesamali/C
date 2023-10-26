/* C Programming
You are building a new home and you have calculated exactly how much cement you need for the foundation.
Ideally you'd like to purchase this exact amount of cement, but the store only sells cement in 120-pound bags. Each of
these bags costs 45 dollars. Please write a C-program that calculates the cost of the cement you will have to purchase to build your foundation.

Your program should first read a decimal number representing the amount of cement needed (in pounds) for the foundations
of your new home. Your program should then display the total cost of the cement bags you have to purchase to have enough
cement to build your foundation. To make your program simpler, you are guaranteed that the amount of cement needed will NEVER be a multiple of 120.

Input: 295.8
Output: 135
*/
#include <stdio.h>
int main(void)
{
    double cement = 0;
    int price = 45;
    int bags = 120;
    double ref = 0;
    int to_pay = 0;
    scanf("%lf", &cement);
    ref = (cement + (bags - 1.0)) / bags;
    to_pay = (int) ref * price;
    printf("%d", to_pay);
    return 0;
}
