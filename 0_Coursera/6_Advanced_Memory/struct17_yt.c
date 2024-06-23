#include<stdio.h>
#include<stdlib.h>

//Self referential struct - Combining data with a link (self ref)
struct node {
    int data;
    struct node *link;
};


//Main here
int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));      //Allocate memory for head
    head -> data = 45;
    head -> link = NULL;
    printf("%d", head->data);
    return 0;
}
