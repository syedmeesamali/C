/* C Programming - MEMORY
Checks only
*/

#include <stdio.h>
int findSize(int a, char c);
int main(void)
{
    int val = 0;
    char type;
    unsigned int kb = 0;
    unsigned int mb = 0;
    scanf("%c %d", &type, &val);
    if (type == 'd')
    {
        printf("\n%u Bytes", sizeof(double) * val);
    }
    return 0;
} //End of main
