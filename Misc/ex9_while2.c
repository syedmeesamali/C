#include <stdio.h>
int main(void) {
    int signaturesNeeded = 1000;
    int day = 0;
    int newSignatures = 2;
    int totalSignatures = 3;
    while (totalSignatures < 1000) {
        day++;
        newSignatures = 1.5*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
    }
    return 0;
}
