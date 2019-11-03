#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

node * createList(int n);
void dispList(node * head);

int main()
{
    int n = 0;
    node * head = NULL;
    printf("\nHow many nodes? ");
    scanf("%d", &n);
    head = createList(n);
    dispList(head);
    return 0;
}

node * createList(int n)
{
    int i = 0;
    node* head = NULL;
    node* temp = NULL;
    node* p = NULL;
    for (i=0; i<n; i++)
    {
        temp = (node*)malloc(sizeof(node));
        printf("\nEnter data for node %d: ", i);
        scanf("%d", &(temp->value));
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        } else {
            p = head;
            while (p->next != NULL)
            {
                p = p->next;
                p->next = temp;
            }
        return head;
        }
    }
}

void dispList(node * head)
{
    node * p = head;
    while (p != NULL)
    {
        printf(" %d -", p->value);
        p = p->next;
    }
}
