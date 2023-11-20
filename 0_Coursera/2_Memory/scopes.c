/* C Programming - MEMORY
Scope of variables
*/

#include <stdio.h>
int main(void)
{
    int a = 5;
    int b = 10;
    {
        int c = 12;
        int d = 30;
        int e = a + c;
        printf("c: %d\n", c);
        printf("e: %d\n", e);
    }
    int f = 14;
    int g = 15;
    printf("f: %d\n",f);
    printf("g: %d", g);

    return 0;
} //End of main
