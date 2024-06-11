#include<stdio.h>

//Simple point struct
struct point
{
    int x;
    int y;
    struct point *next;
};

int main()
{
    struct point p1 = {1, 5, NULL};
    struct point p2 = {3, 5, NULL};
    struct point p3 = {4, 6, NULL};
    struct point *start, *ptr;
    start = &p1;
    p1.next = &p2;
    p2.next = &p3;
    ptr = start;
    return 0;
}
