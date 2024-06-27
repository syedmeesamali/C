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
    struct node *start, *end, *newpt;       //Separate pointers for start and end
    int nums, i, dat;
    printf("How many points?");
    scanf("%d", &nums);
    for (i=0; i<nums; i++)
    {
        printf("\nData = ");
        scanf("%d", &dat);
        newpt = createNode(dat);
        if (i == 0) {
            start = end = newpt;
        } else {
            end = appendData(end, newpt);
        } //End of if
    }
    printData(start);
    return 0;
}

//Print Data
void printData(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d \n", ptr -> data);
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
struct node *appendData(struct node *end, struct node *newptr)
{
    end -> link = newptr;           //Link is part of the struct node itself
    return (end -> link);
}
