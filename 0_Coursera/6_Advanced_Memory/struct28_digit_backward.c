#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

//Function prototypes here
struct digit * createDigit(int dig);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start);
struct digit * readNumber(void);

//Main function
int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);

    freeNumber(start);
    return 0;
}

//Create a new digit
struct digit * createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

//Append the digits
struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

//Print the whole number
void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

//Free memory for the declared number
void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

//Read number from command-line
struct digit * readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
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

struct digit *reverseNumber(struct digit *start)
{
    struct digit *ptr = start;
    struct digit *bstart;
    struct digit *newstart;
    if (start != NULL)
    {
        bstart = createDigit(start -> num);
        ptr = ptr -> next;
    }

    while (ptr != NULL)
    {
        newdigit = createDigit(start -> num);
    }
};
