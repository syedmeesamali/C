/* C Programming
Chars in C
*/
#include <stdio.h>
int main(void)
{
    char letter1 = 'i';
    char letter2 = 'n';
    printf("Enter two letters with , between\n");
    scanf("%c, %c", &letter1, &letter2);
    printf("Letters changed are\n %c, %c", letter1+20, letter2+20);
    return 0;
}
