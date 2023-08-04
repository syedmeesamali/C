/* - COURSERA C Course Exercise
Nest FOR Loop
*/
#include <stdio.h>
int main(void){
    int throwsNum = 0;
    int diceNum = 0;
    int diceVal = 0;
    int throwSum = 0;
    int throw = 0;
    int dice = 0;
    scanf("%d %d", &throwsNum, &diceNum);
    for (throw = 0; throw < throwsNum; throw++)
    {
        for (dice = 0; dice < diceNum; dice++)
        {
            scanf("%d", &diceVal);
            throwSum += diceVal;
        }
        printf("Throw %d equals: %d\n", throw, throwSum);
        throwSum = 0;
    }
    return 0;
}
