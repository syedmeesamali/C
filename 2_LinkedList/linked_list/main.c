#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

typedef struct Node node_t;

void printList(node_t *node) //This will print the whole current list
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
  printf("\n");
}

void addNode(node_t** head_ref, int new_data) //Add a node to end of list
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("\nPrevious cannot be null");
        return;
    }
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void deleteNode(struct Node **head_ref, int key)
{
    struct Node* temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    // If key was not present in linked list
    if (temp == NULL) return;
    // Unlink the node from linked list
    prev->next = temp->next;
    free(temp);  // Free memory
}

int main(void)
{
    struct Node* head = NULL;
    struct Node* aftr = NULL;
    int n, num, del, val;
    char choice;
    while(1)
    {
        printf("\nPlease enter an option:\n");
        printf("'A' Make new list:\n");
        printf("'B' Add nodes to existing list:\n");
        printf("'C' Delete nodes from existing list:\n");
        printf("'D' Insert node after a node (n):\n");
        printf(" or q to exit the program...\n");
        scanf(" %c", &choice);
        if (choice=='q' || choice=='Q')
            break;
        switch(choice) {
            case 'A':
                printf("\nInput the number of nodes:\n");
                scanf("%d", &n);
                while (n > 0)
                {
                    printf("\nEnter node value for node # %d\n", n);
                    scanf("%d", &num);
                    addNode(&head, num);
                    n = n-1;
                }
                printf("\nCreated linked list is:\n");
                printList(head);
                break;
            case 'B':
                printf("\nEnter node value to be added\n");
                scanf("%d", &num);
                addNode(&head, num);
                printf("\nUpdated linked list is:\n");
                printList(head);
                break;
            case 'C':
                printf("\nEnter node value to be deleted\n");
                scanf("%d", &del);
                deleteNode(&head, del);
                printf("\nUpdated linked list is:\n");
                printList(head);
                break;
            case 'D':
                printf("\nEnter after which node to insert and node value\n");
                scanf("%d, %d", &aftr, &val);
                insertAfter(&aftr, val);
                printf("\nUpdated linked list is:\n");
                printList(head);
                break;
            default:
                printf("\nEnter from choice below\n");
                continue;
        } //End of switch case
        printf("\nOutput done...\n");
    }
	return (0);
}
