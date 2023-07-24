/* - COURSERA C Course Exercise on Arrays
You plan to make a delicious meal and want to take the money you need to buy the ingredients.
Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need.
The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each
ingredient the price per pound. Finally your program should read the weight necessary for the recipe
(for each ingredient in the same order). Your program should calculate the total cost of these purchases,
then display it with 6 decimal places.
*/
#include <stdio.h>
int main(void){
    int ing = 0;
    scanf("%d", &ing);
    int i = 0;
    int totalPrice = 0;
    printf("%d ingredients\d", ing);
    int kgs[ing];
    int price[ing];
    for (i = 0; i < ing; i++)
    {
        scanf("%d", &price[i]);
    }
    for (i = 0; i < ing; i++)
    {
        scanf("%d", &kgs[i]);
    }
    for (i = 0; i < ing; i++)
    {
        totalPrice += price[i] * kgs[i];
    }
    printf("Total price is %f", totalPrice);

    return 0;
}
