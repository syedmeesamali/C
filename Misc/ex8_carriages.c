/* - COURSERA C Course Exercise on Arrays
You plan to make a delicious meal and want to take the money you need to buy the ingredients.
Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need.
The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each
ingredient the price per pound. Finally your program should read the weight necessary for the recipe
(for each ingredient in the same order). Your program should calculate the total cost of these purchases,
then display it with 6 decimal places.
*/
#include <stdio.h>

int main(void)
{
    int boxes = 0;
    scanf("%d", &boxes);
    printf("\n");
    double weights[boxes];
    double totWt = 0;
    double avgWt = 0;
    double printWt = 0;
    printf("Total %d boxes\n", boxes);
    for (int i=0; i<boxes; i++)
    {
        printf("Enter weight of box # %d: ", i+1);
        scanf("%.2lf", &weights[i]);
        totWt += weights[i];
    }
    avgWt = totWt / boxes;

    for (int i=0; i<boxes; i++)
    {
        printWt = avgWt - weights[i];
        printf("Weight 1 distributed is: %.2lf\n", printWt);
    }
    printf("--- End of program ----");

    return 0;
}
