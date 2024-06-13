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


int main()
{
    struct point p1 = {1, 5, NULL};
    struct point p2 = {3, 5, NULL};
    struct point p3 = {4, 6, NULL};
    struct point *start, *ptr;
    start = &p1;
    p1.next = &p2;
    p2.next = &p3;
    //printf("\n %p - %p - %p \n", &p1.x, &p1.y, &p1.next);
    // printf("\n %lu - %lu - %lu \n", sizeof(p2.x), sizeof(p2.y), sizeof(p2.next));
    printPoints(start);
    return 0;
}

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
