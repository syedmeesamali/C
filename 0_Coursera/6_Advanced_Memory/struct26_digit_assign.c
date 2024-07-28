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
bool divisibleByThree(struct digit *start);
void printNumber(struct digit *ref);
void freeNumber(struct digit *start);

//Main is below
int main(void) {
    struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    printf("Start value is still %d \n", start -> num);
    if (divisibleByThree(start))
        printf("is divisible by 3.\n");
    else
        printf("is not divisible by 3.\n");
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

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

//Check if divisible by three or not
bool divisibleByThree(struct digit *start)
{
    int a = 0;
    while (start != NULL)
    {

    }
    a = start -> num;
    if (a % 3 == 0)
    {
        printf("a val was %d \n");
        return true;
    } else
    {
        printf("a val was %d - else part \n");
        return false;
    }
};
