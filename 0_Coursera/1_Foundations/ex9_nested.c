/* - COURSERA C Course Exercise on Arrays
You want to determine the number of cities in a given region that have a population strictly greater than
10,000. To do this, you write a program that first reads the number of cities in a region as an integer,
and then the populations for each city one by one (also integers).
*/
#include <stdio.h>

int main(void)
{
    int cities = 0;
    scanf("%d", &cities);
    int pop[cities];
    int countBig = 0;
    for (int i=0; i<cities; i++)
    {
        scanf("%d", &pop[i]);
    }

    for (int i=0; i<cities; i++)
    {
        if (pop[i] > 10000)
        {
            countBig++;
        }
    }
    printf("%d", countBig);

    return 0;
}
