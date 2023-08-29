/* C Programming
Searching for words
*/

#include <stdio.h>
int main(void)
{
    int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};
    int n = 10;     //C doesn't know the lengths
    int item, i, found;
    printf("What number are you looking for?");
    scanf("%d", &item);
    found = 0;
    i = 0;
    while (!found && i < n)
    {
        if (item == list[i])
        {
            found = 1;
        } else
        {
            i++;
        }
    }
    if (found)
    {
        printf("%d is found in list at %d", item, i+1);
    } else
    {
        printf("Not found :(");
    }


    return 0;
}
