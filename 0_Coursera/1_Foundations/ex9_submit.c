/* - COURSERA C Course Exercise on Arrays
print stars
*/
#include <stdio.h>

int main(void)
{
    int stars = 0;
    scanf("%d", &stars);
    for (int i=0; i<stars; i++)
    {
        for (int j=1; j<stars; j++)
        {
            printf("*");
        }
        printf("*\n");
    }
    return 0;
}
