#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

#define false 0
#define true 1
typedef int bool;

//Function prototypes
struct digit *readNumber(void);
struct digit *createDigit(int val);
struct digit *append(struct digit *end, struct digit *newPos);
struct digit *searchNumber(struct digit *start, int number);
void printNumber(struct digit *ref);
void freeNumber(struct digit *start);

//Main is below
int main(void) {
    struct digit *start, *ptr;
    int searchNum = 5;
    printf("Please enter a number: ");
    start = readNumber();
    printNumber(start);
    ptr = searchNumber(start, searchNum);
    if (ptr != NULL)
    {
        printf("Found %d at %p.", searchNum, ptr);
    } else
    {
        printf("%d not found !", searchNum);
    }
    freeNumber(start);
    return 0;
}

//Create a new digit based on user input
struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

//Append function
struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

//Print a particular number
void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

//Free the memory
void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL)
    {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

//Read a particular number
struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n')
    {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

//Search a number within entered numbers
struct digit *searchNumber(struct digit *start, int number)
{
    struct digit *ptr = start;
    while ((ptr != NULL) && (ptr -> num != number) )
    {
        ptr = ptr -> next;
    }
    return ptr;
};
