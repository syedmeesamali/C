#include<stdio.h>
#include<stdlib.h>

//Self referential struct
struct node {
    int data;
    struct node *link;
};



//Main here
int main()
{
    struct node *head = NULL;
    return 0;
}
