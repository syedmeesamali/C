#include<stdio.h>
#include<stdlib.h>

//Structs here
struct digit {
    int num;
    struct digit *next;
};

//Function prototypes
struct digit *createDigit(int val);
struct digit *append(struct digit *end, struct digit *newPos);
int main()
{
    int a = 5; int b = 7; int c = 12;
    struct digit *start, *digitPtr, *end;       //Three structs to define the start, middle and end of a linkedlist
    start = createDigit(a);
    end = start;
    digitPtr = createDigit(b);
    //end = createDigit(c);
    end = append(end, digitPtr);          //New append function to help make the linked-list
    digitPtr = createDigit(c);
    end = append(end, digitPtr);
    printf("Digit created is %d saved at memory address: %p\n", start -> num, start -> next);
    //Free memory 
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
