#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myarr[] = {1,2,3,4};
    int *my_ptr;        //Pointer for array (default start is start of array)

    for (my_ptr = myarr; my_ptr <= &myarr[3]; ++my_ptr)
        printf("%d ", *my_ptr);

    static char word[] = { "meesam ali" };
    char *char_ptr;
    for (char_ptr = word; *char_ptr != '\0'; ++char_ptr)
    {
        printf("%c\n", *char_ptr);
    }

    return 0;
}
