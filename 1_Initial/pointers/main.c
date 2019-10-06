#include <stdio.h>

void skip(char *msg)
{
    puts((msg+6));
}

int main()
{

    /*
    int contest[] = {1,2,3};
    int *choice = contest;
    contest[0] = 2;
    contest[1] = contest[2];
    contest[2] = *choice;
    printf("Pick contestant number %i\n", contest[2]);
    */

    /*
    int doses[] = {1, 3, 2, 1000};
    printf("Issue doses %i", 3[doses]);
    return 0;
    */
    char *msg_from = "This is the correct message";
    skip(msg_from);

}
