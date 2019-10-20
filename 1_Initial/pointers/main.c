#include <stdio.h>

int main()
{

    /*
    int doses[] = {1, 3, 2, 1000};
    printf("Issue doses %i", 3[doses]);
    return 0;
    */
    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    return 0;
}
