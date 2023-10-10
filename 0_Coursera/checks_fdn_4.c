/* C Programming
- Multiple inputs from the user
*/
#include <stdio.h>
int main(void)
{
    int howMany = 0;
    int sum = 0;
    int read = 0;
    printf("How many nums?");
    scanf("%d", &howMany);
    for (int i=0; i<howMany; i++)
    {
        scanf("%d", &read);
        printf("Read %d from user\n", read);
        sum = sum + read;
        printf("Sum is %d now! \n", sum);
    }
    return 0;
}
