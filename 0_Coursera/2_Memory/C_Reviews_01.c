/* C Programming - MEMORY
Reviews of the language
*/

#include <stdio.h>
int main(void)
{
    float fahr, cels;
    int lower, upper, step;
    //Set lower and upper limits
    lower = 0;
    upper = 300;
    step = 20;

    //Conversion table
    fahr = lower;
    while (fahr < upper)
    {
        cels = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f \t%6.1f\n", fahr, cels);
        fahr += step;
    }
	return 0;
}
