/* C Advanced Programming
Dynamic memory allocation for the structs.
*/
#include <stdio.h>
#include<stdlib.h>

struct point
{
    int x;
    int y;
};


//Function prototypes
void printPoint(struct point pt);
void readPoint(struct point * ptr);
void printPolygon(struct point * ptr);


//Main function
int main(void)
{
	struct point * polygon;
	int num;
	printf("How many vertices for your polygon? ");
	scanf("%d", &num);
	polygon = (struct point *) malloc(num * sizeof(struct point));
	readPoint(&polygon[0]);
	readPoint(&polygon[1]);
	readPoint(&polygon[2]);
	printPolygon(polygon);
	return 0;
}

void readPoint(struct point *ptr)
{
    printf("x: ");
    scanf("%d", &ptr -> x);
    printf("y: ");
    scanf("%d", &ptr -> y);
}

void printPolygon(struct point *ptr)
{
    int i=0;
    for (i=0; i<3; i++)
    {
        printf("\n x: %d, y: %d", ptr->x, ptr->y);
    }
}
