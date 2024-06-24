#include<stdio.h>
#include<stdlib.h>

//Self referential struct - Combining data with a link (self ref)
struct node {
    int data;
    struct node *link;
};

void printData(struct node *ref);
//Main here
int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));      //Allocate memory for head
    head -> data = 45;
    head -> link = NULL;
    printData(head);
    return 0;
}

//Print Data
void printData(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("\n %d \n", ptr -> data);
        ptr = ptr -> link;
    }
}
