/* C Programming
Comparing the words
*/

#include <stdio.h>
int main(void)
{
    int list[] = {-10, -3, 5, 10, 18, 25, 39, 255, 390, 1015};      //Sorted list
    int n = 10;
    int item;
    int ind_bot, ind_mid, ind_top, found;
    printf("Which number you're looking for?");
    scanf("%d", &item);
    ind_bot = 0;        //Bottom index
    ind_top = n - 1;
    found = 0;
    while (!found && (ind_bot <= ind_top))
    {
        ind_mid = (ind_bot + ind_top) / 2;
        if (item == list[ind_mid])
        {
            found = 1;
        } else if (item < list[ind_mid])
        {
            ind_top = ind_mid - 1;      //New search location (lower half retained)
        } else
        {
            ind_bot = ind_mid + 1;      //Upper half for search
        }
    }

    if (found)
    {
        printf("Item %d was found !!", item);
    }
    return 0;
}
