#include <stdio.h>
#include <stdlib.h>

struct listrec
{
    int value;
    struct listrec *next;
};

struct listrec *search(listptr, match)
struct listrec *listptr;
int match;
{
    while(listptr != (struct listrec *) NULL)
        if(listptr -> value == match)
            break;
        else
            listptr = listptr -> next;
    return (listptr);
}

int main()
{
    struct listrec x1, x2;
    x1.value = 100;
    x1.next = &x2;      //Link x1 and x2
    x2.value = 150;
    x2.next = NULL;
    printf("%d %d", x1.value, x2.value);
    return 0;
}
