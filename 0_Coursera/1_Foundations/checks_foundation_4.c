/* C Programming
CPetra, Rémi and their families went hiking in the mountains together and realized that distances are
measured in different units in France and the United States. To help them convert between units,
please write a program that reads a decimal number representing a distance in kilometers and that
prints out the corresponding distance in miles with 6 decimal places.

You may use the fact that one kilometer equals 0.621371 miles.
*/
#include <stdio.h>
int main(void)
{
    double km, miles;
    scanf("%lf", &km);
    printf("%lf", km * 0.621371);        //Period 2 means only 2 decimal places.
    return 0;
}
