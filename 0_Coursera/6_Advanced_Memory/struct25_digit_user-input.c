#include<stdio.h>
#include<stdlib.h>

//Structs here
struct digit
{
    int num;
    struct digit *next;
};

//Function prototypes
struct digit *readNumber(struct digit *ptr);
struct digit *createDigit(int val);
struct digit *append(struct digit *end, struct digit *newPos);
struct digit *searchNumber(struct digit *start, int number);
void printNumber(struct digit *ref);
void freeNumber(struct digit *start);

//Main is below
int main()
{
    struct digit *start, *ptr;                                //Three structs to define the start, middle and end of a linkedlist
    int searchNum;
    printf("Please enter a number! \n");
    start = readNumber(start);                          //New function to read the number directly from user input
    printNumber(start);                                 //Printing using a print function now
    ptr = searchNumber(start, searchNum);
    if (ptr != NULL)
    {
        printf("FOund %d at %p location.\n", searchNum, ptr);
    } else
    {
        printf("Digit %d not found. \n", searchNum);
    }
    freeNumber(start);                                  //Free the memory upon completion of processing
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

//Append digit function
struct digit *append(struct digit *end, struct digit *newPos)
{
    end -> next = newPos;
    end = newPos;
    return end;
}

//Read the number from the user
struct digit *readNumber(struct digit *ptr)
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

//Function searchNum to find a number
struct digit *searchNumber(struct digit *start, int number)
{
    struct digit *ptr = start;
    while (ptr != NULL && ((ptr -> num) != number))
    {
        ptr = ptr -> next;
    }
    return (ptr);
};
