#include<stdio.h>
int main()
{
    int dice1 = 0;
    int dice2 = 0;
    scanf("%d", &dice1);
    scanf("%d", &dice2);
    if (dice1 + dice2 > 10)
    {
    printf("Special tax\n");
    printf("36");
    } else
    {
    printf("Regular tax\n");
    printf("%d", dice1*2 + dice2*2);
    }
    return 0;
}
