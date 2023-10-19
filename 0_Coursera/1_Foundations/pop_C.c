/* C Programming
The population of a city has risen sharply over the past few years, thanks to a high birth rate. However,
this poses a number of problems, including a housing shortage. The mayor has decided to deal with the
problem and would like to estimate the future growth of the population, and he has called you in to help!

Please write a C-program that first reads an integer representing the current population of the city,
and that next reads a decimal number for the projected population growth as a percentage (either positive or negative).
The program should then display the expected population of the city in a year as a whole number. By convention we
will only consider "whole" people. So a population of 31.8 inhabitants will be considered as having 31 inhabitants.
Input: 123, 7.0
Output: 131
*/
#include <stdio.h>
int main(void)
{
    int pop = 0;
    double proj = 0;
    int final_pop = 0;
    double growth = 0;
    scanf("%d", &pop);
    scanf("%lf", &proj);
    growth = pop * (1 + (proj / 100));
    final_pop = (int) growth;
    printf("%d", final_pop);
    return 0;
}
