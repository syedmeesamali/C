/* C Programming - MEMORY
You are programming a toaster! The toaster does not have a lot of memory, so you need to be
careful about the data types you use (remember that different data types use different amounts of
memory). To make this easier, you'd like an easy way to track how much memory your variables are going to use.

Your job is to write a program that shows, in human-readable form (see below for specifics),
how much memory a set of variables of a certain type will use. Your program should read a character
that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). Next it should
read an integer that indicates how many variables of the given type you wish to store.

Your program should then calculate the amount of memory required to store the given variables. Your program
needs to be written in such a way that it would also perform correctly on other computers. In other words,
rather than hard-coding specific sizes for the different variable types, your program needs to use the "sizeof()"
function to determine how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by your variables to the screen. You need to make sure
you provide this output in a form that is easy to read for humans. The following examples illustrate what this means:

input: i 36794
output: 147 KB and 176 B
*/

#include <stdio.h>
int findSize(int a, char c);
int main(void)
{
    int val = 0;
    char type = 'c';
    unsigned int kb = 0;
    unsigned int bytes = 0;
    unsigned int sum = 0;
    scanf("%c %d", &type, &val);
    if (type == 'i')
    {
        sum = sizeof(int) * val;
    } else if (type == 'c')
    {
        sum = sizeof(char) * val;
    } else if (type == 'd')
    {
        sum = sizeof(double) * val;
    } else
    {
        return 0;
    }
    kb = sum / 1000;
    bytes = sum % 1000;
    printf("%u KB and %u B", kb, bytes);
    return 0;
} //End of main
