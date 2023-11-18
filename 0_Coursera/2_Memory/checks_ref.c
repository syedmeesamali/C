/* C Programming - MEMORY
Checks only
*/

#include <stdio.h>
int findSize(int a, char c);
int main(void)
{
    int val = 0;
    char type;
    int kb = 0;
    int mb = 0;
    int sum = 0;
    scanf("%c %d", &type, &val);
    sum = sizeof(double) * val;
    mb = sum / 1000000;
    kb = (sum - mb * 1000000) / 1000;
    printf("\nBytes are %d", sum);
    printf("\n%d MB %d KB", mb, kb);
    return 0;
} //End of main
