/* C Programming
You have a number of loose matches that you would like to put back into boxes. Write a program
that calculates and displays how many full boxes you will have and how many leftover matches you
will have after filling all the boxes you can. Your program should take as input the number of matches
to be boxed up followed by the size of a each box.
Next it should print out the number of full boxes followed by the number of remaining matches.
*/
#include <stdio.h>
int main(void)
{
    int total = 0;
    int loose = 0;
    int rem = 0;
    scanf("%d", &total);
    scanf("%d", &loose);
    int fill = 0;
    fill = total / loose;
    rem = total % loose;
    printf("%d\n", fill);
    printf("%d", rem);
    return 0;
}
