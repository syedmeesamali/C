#include <stdio.h>
int main()
{

    char masked[] = "Alive";
    char *jimmy = masked;
    printf("Masked is: %s and raider is %s\n", masked, jimmy);
    masked[0] = 'd';
    masked[1] = 'e';
    masked[2] = 'a';
    masked[3] = 'd';
    masked[4] = '!';
    printf("Masked is: %s and raider is %s", masked, jimmy);
    return 0;
}
