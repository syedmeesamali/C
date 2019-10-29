#include <stdio.h>
#include <stdlib.h>
//Define the structure node
struct Node
{
    int data;
    struct Node* next;
};
//Print the list
void printList(struct Node* n)
{
    while (n != NULL)
    {
        printf("\n %d ", n -> data);
        n = n -> next;
    }
}
//Push new node to the linked list
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}
//Main program for node initialization in linked list
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 1;
    head -> next = second;
    second -> data = 4;
    second -> next = third;
    third -> data = 17;
    third -> next = NULL;
    printList(head);
    printf("\nAfter addition of new node!\n");
    push(&head, 24);
    printList(head);
}
