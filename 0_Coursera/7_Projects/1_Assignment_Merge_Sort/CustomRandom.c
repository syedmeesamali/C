// CustomRandom.c - Custom random number generator using linear congruential method.
//
// customRandom() produces pseudo-random numbers in the range 0..INT_MAX.
// This function could be modified by adding a "precision" argument,
// usually a power of 10, to force the random number into a
// specified range.
// Run this demo several times to see the values it produces.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long seed = 0;
const unsigned long a = 1664525L;
const unsigned long c = 1013904223L;

void customSeed(unsigned long value)
{
    seed = value;
} // end customSeed()


unsigned long customRandom()
{
    seed = (a * seed + c);
    return seed;
} // end customRandom


#define PRECISION 10000000      // 10 million

int main()
{
    // Seed the custom random number generator with the current time
    // Seeding will make the generator produce different sequences of
    // numbers each time a program starts.
    // Seeding should only be done once at the beginning of a program.

    customSeed((unsigned int)time(NULL));

    // Demonstrate Usage

    const int COUNT = 100;
    int INT_MAX = 250000;

    printf("\nDemonstrate customRandom() Usage. INT_MAX = %d\n\n", INT_MAX);

    printf("%d random ints in the range 0 to %d (10 million):\n", COUNT, PRECISION);
    for (int i = 0; i < COUNT; i++)
{
    unsigned long randomInteger = customRandom() % PRECISION;
        if (i % 10 == 0) printf("\n");
        printf("%9lu ", randomInteger);
    }
    printf("\n");

    printf("\nDone\n");

    return 0;
} // end main()
