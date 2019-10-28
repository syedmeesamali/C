#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* pNext;
};

void printList(struct Node *node) //This will print the whole current list
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->pNext;
  }
}

void addNode(struct Node** head_ref, int new_data) //Add a node to end of list
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    /* 2. put in the data  */
    new_node->data  = new_data;
    /* 3. Make next of new node as head */
    new_node->pNext = (*head_ref);
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

void deleteNode(struct Node **head_ref, int key)
{
    // Store head node
    struct Node* temp = *head_ref, *prev;
    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->pNext;   // Changed head
        free(temp);               // free old head
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->pNext;
    }
    // If key was not present in linked list
    if (temp == NULL) return;
    // Unlink the node from linked list
    prev->pNext = temp->pNext;
    free(temp);  // Free memory
}

int main()
{
    struct Node* head = NULL;
    int n;
    char choice;
    do {
        printf("Please enter an option:\n");
        printf("'A' Make new list:\n");
        printf("'B' Add nodes to existing list:\n");
        printf("'C' Delete nodes from existing list:\n");
        printf(" or q to exit the program...\n");
        scanf("%c", &choice);

        switch(choice)
        {
            case 'A':
            {
                printf("\nInput the number of nodes:\n");
                scanf("%d", &n);
                int num;
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
            }
            case 'B':
            {
                    int num;
                    printf("\nEnter node value to be added\n");
                    scanf("%d", &num);
                    addNode(&head, num);

                printf("\nUpdated linked list is:\n");
                printList(head);
                break;
            }
            case 'C':
            {
                    int del;
                    printf("\nEnter node value to be deleted\n");
                    scanf("%d", &del);
                    deleteNode(&head, del);

                printf("\nUpdated linked list is:\n");
                printList(head);
                break;
            }
        } //End of switch case
      } while (choice != 'q');
    //End of main while loop

	return 0;
}
