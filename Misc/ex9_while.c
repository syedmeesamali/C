#include <stdio.h>
int main(void) {
    int diceValue = 0;
    int notSix;
    scanf("%d", &diceValue);
    notSix = diceValue != 6;
    while(notSix){
        scanf("%d", &diceValue);
        notSix = diceValue != 6;
    }
    return 0;
}
