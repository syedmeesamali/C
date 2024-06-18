#include<stdio.h>
#include<stdlib.h>
//Simple point struct
struct point
{
    int x;
    int y;
    struct point *next;
};

//Print the points
void printPoints(struct point *start);
struct point * append(struct point *pt1, struct point *pt2);
struct point * createPoint(int x, int y);
int main()
{
    int num, i;
    int x, y;
    struct point *start, *end, *newpt;
    printf("How many points to enter?");
    scanf("%d", &num);
    for (i=0; i<num; i++)
    {
        printf("\nX: ");
        scanf("%d", &x);
        printf("\nY: ");
        scanf("%d", &y);
        newpt = createPoint(x, y);
        if (i == 0) {
            start = end = newpt;
        } else {
            end = append(end, newpt);
        }
    }
    printf("You entered: ");
    printPoints(start);
    // freePoints(start);
    return 0;
}

//Print the points function
void printPoints(struct point *start)
{
    struct point *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("[%d, %d] \n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
}

//Append function
struct point * append(struct point *end, struct point *new)
{
    end -> next = new;
    return (end -> next);
}

//Create point
struct point * createPoint(int x, int y)
{
    struct point * ptr;
    ptr =  (struct point *)malloc(sizeof(struct point));
    ptr -> x = x;
    ptr -> y = y;
    ptr -> next = NULL;
    return(ptr);
}
