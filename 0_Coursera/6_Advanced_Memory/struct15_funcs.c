#include<stdio.h>
//Simple point struct
struct point
{
    int x;
    int y;
    struct point *next;
};

//Print the points
void printPoints(struct point *start);
void append(struct point *pt1, struct point *pt2);
int main()
{
    struct point p1 = {1, 5, NULL};
    struct point p2 = {3, 5, NULL};
    struct point p3 = {4, 6, NULL};
    struct point *start, *ptr;
    start = &p1;
    append(&p1, &p2);       //Use pointers to the actual variables
    append(&p2, &p3);
    printPoints(start);
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
void append(struct point *end, struct point *new)
{
    end -> next = new;
}
