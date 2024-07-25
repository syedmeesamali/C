#include<stdio.h>
#include<stdlib.h>

#define false 0
#define true 1
typedef int bool;

//Structs here
struct digit
{
    int num;
    struct digit *next;
};

//Function prototypes
struct digit *readNumber(void);
struct digit *createDigit(int val);
struct digit *divisibleByThree(struct digit *start);
void printNumber(struct digit *ref);
void freeNumber(struct digit *start);

//Main is below
int main()
{
    struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    if (divisibleByThree(start))
        printf("is divisible by 3.\n");
    else
        printf("is not divisible by 3.\n");
    freeNumber(start);
    return 0;
}

//Create digit function
struct digit *createDigit(int val)
{
    struct digit *ptr;
    ptr = (struct digit *)malloc(sizeof(struct digit));
    ptr -> num = val;
    ptr -> next = NULL;
    return ptr;
}

//Read the number from the user
struct digit *readNumber(void)
{
    char c;
    int d;
    struct digit *start, *end, *nextPtr;
    start = NULL;
    scanf("%c", &c);        //Read characters from user as they enter
    while (c != '\n')       //While enter is not pressed
    {
        d = c - 48;         //Chars to Digits
        nextPtr = createDigit(d);
        if (start == NULL)
        {
            start = nextPtr;
            end = start;
        } else
        {
            end = append(end, nextPtr);
        }
        scanf("%c", &c);
    }
    return start;
};

//Check if divisible by three or not
bool divisibleByThree(struct digit *start)
{
    int a = start -> num;
    if (a % 3 == 0)
        return 1;
    else
        return 0;
};

//Simple printDigit function
void printNumber(struct digit *ref)
{
    while (ref != NULL)
    {
        printf("%d is stored with next memory at %p\n", ref -> num, ref -> next);
        ref = ref -> next;
    }
}

//Free the variables from list
void freeNumber(struct digit *start)
{
    struct digit *ptr = start;
    struct digit *temp;
    while (ptr != NULL)
    {
        temp = ptr -> next;             //save the next here
        free(ptr);                      //free the pointer
        ptr = temp;                     //get back the previous saved next from temp
    }
}
