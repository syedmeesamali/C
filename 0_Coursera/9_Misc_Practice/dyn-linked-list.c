#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* insert(struct Node* head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = head;
    return newNode;
};

void printList(struct Node* head)
{
    while(head)
    {
        printf("%d -> ", head -> data);
        head = head -> next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node* head = NULL;
    head = insert(head, 5);
    head = insert(head, 9);
    printList(head);

    return 0;
}
