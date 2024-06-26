#include<stdio.h>
#include<stdlib.h>

//Self referential struct - Combining data with a link (self ref)
struct node {
    int data;
    struct node *link;
};

void printData(struct node *ref);
struct node *createNode(int x); 
struct node *appendData(struct node *end, struct node *newpt);
//Main here
int main()
{
    struct node *head = NULL;
    struct node *start, *end, *newpt;       //Separate pointers for start and end
    start = end;
    head = (struct node *)malloc(sizeof(struct node));      //Allocate memory for head
    head -> data = 45;
    head -> link = NULL;
    printData(head);
    int nums, i, dat;
    printf("How many points?");
    scanf("%d", &nums);
    for (i=0; i<nums; i++)
    {
        printf("\nData = ");
        scanf("%d", &dat);
        newpt = createNode(dat);
    } 
    end = appendData(end, newpt);
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

//Create node
struct node *createNode(int x)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = x;
}

//Append node
struct node *appendData(struct node *start, struct node *end)
{
    //Implement append here
}
