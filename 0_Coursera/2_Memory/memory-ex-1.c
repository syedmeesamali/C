/* C Programming - MEMORY
A delivery company has hired you to manage their tracking services division. It is your job to store
all of the currently used tracking codes in the company's database. These codes consist of either all
integers, all decimal numbers, or all characters. The chief technology officer has warned you that the
database is old and has limited space, so you want to determine how much memory the tracking codes will
occupy before storing them. You decide to write a program to assist you in this process.

Your program should first read an integer number indicating how many tracking codes you plan on entering.
Next, for each successive tracking code your program should read in the integer length of code followed
by a space and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). Finally
your program should print the total amount of space required to store all of the tracking codes (in bytes).
If the user enters an incorrect type for any tracking number, the program should print 'Invalid tracking code type' and exit.
*/

#include <stdio.h>
int calcSize(char c);
int main(void)
{
    int total;
    int sum = 0;
    scanf("%d", &total);
    int val[total];
    char type[total];
    for (int i=0; i<total; i++)
    {
        scanf("%d %c", &val[i], &type[i]);
    }

    //Make sum calculation from saved array
    for (int j=0; j<total; j++)
    {
        if (type[j] == 'c' || type[j] == 'i' || type[j] == 'd')
        {
            sum = sum + val[j] * calcSize(type[j]);
        } else
        {
            printf("Invalid tracking code type");
            return 0;
        }
    }
    printf("%d bytes", sum);
    return 0;
} //End of main

//Function calculate size
int calcSize(char c)
{
    if (c == 'i')
    {
        return 4;
    } else if (c == 'c')
    {
        return 1;
    } else if (c == 'd')
    {
        return 8;
    } else
    {
        return 0;
    }
}
