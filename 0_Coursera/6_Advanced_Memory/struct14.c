#include<stdio.h>

struct point
{
    int x;
    int y;
    struct point *next;
};

//Print the points function prototype
void printPoints(struct point *start);

int main()
{
    struct point p1 = {1, 5, NULL};
    struct point p2 = {3, 5, NULL};
    struct point p3 = {4, 6, NULL};
    struct point *start, *ptr;
    start = &p1;
    p1.next = &p2;
    p2.next = &p3;
    printPoints(start);
    return 0;
}

//Full function "printPoints"
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
