#include<stdio.h>
#include<stdlib.h>

//Struct digit
struct digit {
    int num;
    struct digit *next;
};

//Prototype for create digit function
struct digit *createDigit(int dig);

//Main
int main()
{
    struct digit *refDigit;
    int makeDig = 5;
    refDigit = createDigit(makeDig);
    printf("Digit %d is created at pointer %p and memory location of %p \n", refDigit -> num, refDigit -> next, refDigit);
    free(refDigit);         //Always free after using malloc
    return 0;
}


//New create digit function
struct digit *createDigit(int dig)
{
    struct digit *ptr;
    ptr = (struct digit *)malloc(sizeof(struct digit));
    ptr -> num = dig;
    ptr -> next = NULL;
    return ptr;
}
