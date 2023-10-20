/* C Programming - Memory Management
- Start of new course # 3 (Modular programming & memory management)
Functions
*/
#include <stdio.h>
int sum(int x, int y)
{
    int compute;
    printf("Starting computation!\n");
    compute = x + y;
    printf("Finished computation!\n");
    return compute;
}

//Main method
int main(void)
{
    int a, b;
    int total = 0;
    scanf("%d %d", &a, &b);
    total = sum(a, b);
    printf("Total is %d", total);
    return 0;
}
