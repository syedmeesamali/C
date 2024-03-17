#include<stdio.h>
//Define struct card
struct card
{
    char *face;
    char *suit;
};

//Main function
int main()
{
    struct card aCard;          //Declare variable for struct
    struct card *cardPtr;       //Pointer to the struct
    aCard.face = "ace";
    aCard.suit = "Spades";
    cardPtr = &aCard;           //Pointer to hold struct address
    printf("\n%s of suit %s\n", aCard.face, aCard.suit);
    printf("\nCard %s of %s suit\n", cardPtr -> face, cardPtr -> suit);
    return 0;
}
