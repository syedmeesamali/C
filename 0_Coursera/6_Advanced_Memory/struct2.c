#include<stdio.h>
struct card
{
    char *face;
    char *suit;
} aCard, deck[52], *cardPtr; 

int main()
{
    struct card aCard = {"Three", "Hearts"};
    printf("\n %s \n", aCard.suit);
    printf("\n %s \n", aCard.face);
    printf("\n %s \n", cardPtr->suit);

    return 0;
}
