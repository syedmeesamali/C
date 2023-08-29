#include <stdio.h>
int main(void) {
    int diceValue = 0;
    int numThrows = 0;
    scanf("%d", &diceValue);
    while(diceValue != 6){
        scanf("%d", &diceValue);
        numThrows++;
    }
    printf("%d throws to get 6", numThrows + 1);
    return 0;
}
