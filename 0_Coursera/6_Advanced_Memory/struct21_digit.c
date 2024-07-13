#include<stdio.h>
#include<stdlib.h>

//Structs here
struct digit
{
    int num;
    struct digit *next;
};

//Function prototypes
struct digit *createDigit(int val);
struct digit *append(struct digit *end, struct digit *newPos);
void printDigit(struct digit *ref);
int main()
{
    int a = 5; int b = 7; int c = 12; int d = 15;
    struct digit *start, *digitPtr, *end, *tmp;       //Three structs to define the start, middle and end of a linkedlist
    start = createDigit(a);
    end = start;
    digitPtr = createDigit(b);
    //end = createDigit(c);
    end = append(end, digitPtr);          //New append function to help make the linked-list
    digitPtr = createDigit(c);
    end = append(end, digitPtr);
    digitPtr = createDigit(d);
    end = append(end, digitPtr);        //Now a list is of FOUR (04) digits instead of original 3
    printDigit(start);                  //Printing using a print function now

    tmp = start -> next;
    free(start); //We haven't lost NEXT as its already saved in tmp
    free(tmp);
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

//Simple printDigit function
void printDigit(struct digit *ref)
{
    while (ref != NULL)
    {
        printf("%d is stored with next memory at %p\n", ref -> num, ref -> next);
        ref = ref -> next;
    }
}
