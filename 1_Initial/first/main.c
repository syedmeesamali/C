#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decks;
    puts("Enter some number: ");
    scanf("%i", &decks);
    if (decks < 1)
    {
        puts("Not a valid number!");
        return 1;
    }
    printf("There are %i cards\n", (decks * 52));
    return 0;
}
