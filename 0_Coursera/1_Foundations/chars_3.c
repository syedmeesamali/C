/* C Programming
Chars in C
*/
#include <stdio.h>
int main(void)
{
    char ab;
    scanf("%c", &ab);
    printf("++++%c++++\n", ab);
    printf("+++%c%c%c+++\n",ab,ab,ab);
    printf("++%c%c%c%c%c++\n",ab,ab,ab,ab,ab);
    printf("+%c%c%c%c%c%c%c+\n",ab,ab,ab,ab,ab,ab,ab);
    printf("%c%c%c%c%c%c%c%c%c\n",ab,ab,ab,ab,ab,ab,ab,ab,ab);
    return 0;
}
