/* C Programming
You are helping a teacher average grades. You get bored computing averages by hand, so you decide to
write a computer program to do the work for you.

Your program must first read an integer indicating the number of grades to be averaged. Next,
your program will read the grades one by one, all of which are integers as well. Finally, your
program will calculate and print the average of the grades to two decimal places.
Input: 4, 10, 8, 16, 9
Output: 10.75
*/
#include <stdio.h>
int main(void)
{
    int val = 0;
    int nums = 0;
    int sum = 0;
    double avg = 0;
    scanf("%d", &nums);
    for (int i=0; i<nums; i++)
    {
        scanf("%d", &val);
        sum = sum + val;
    }
    avg = (double) sum / nums;
    printf("%.2lf", avg);
    return 0;
}
