// elapsedtime.c - Show how to calculate elapsed time
#include <stdio.h>
#include <time.h>
#include <Windows.h>    // for Sleep()

// Simulate some work; we'll just sleep for 2.5 seconds
void doSomeWork() {
    printf("Working... ");
    Sleep(2500);
    printf("work done\n");
} // end doSomeWork()

int main()
{
    printf("\nShow how to calculate elapsed time using clock()\n\n");

    clock_t startTime = clock();    // Remember the starting time

    doSomeWork();                   // Do the work to be timed

    clock_t stopTime = clock();     // Save the stopping time

    // Calculate milliseconds, seconds, minutes
    double milliseconds = 1000.0 * (stopTime - startTime) / CLOCKS_PER_SEC;
    double seconds = milliseconds / 1000.0;
    double minutes = seconds / 60.0;

    printf("\nElapsed time:\n\n");
    printf("%0.3f minutes\n", minutes);
    printf("%0.3f seconds\n", seconds);
    printf("%.1f milliseconds\n", milliseconds);

    printf("\nDone\n");
    return 0;
} // end main()
