/* C Advanced Programming
Structure of arrays.
*/
#include <stdio.h>
struct point
{
    int x;
    int y;
};


//Function prototypes
void printPoint(struct point pt);
void readPoint(struct point *pt);
void printTriangle(struct point *pt);


//Main function
int main(void)
{
	struct point triangle[3];
	triangle[2].x = 4.1;
	triangle[0].x = 3.5;
	triangle[0].y = 4.1;
	triangle[1].x = 4.1;
	triangle[1].y = 3.5;
	(triangle+2)->y = 4.1;
	printTriangle(triangle);
	return 0;
}

//Read point function
void readPoint(struct point * ptr)
{
    printf("Enter a new point: \n");
    printf("X-coord: ");
    scanf("%d", &ptr->x);
    printf("Y-coord: ");
    scanf("%d", &ptr->y);
}

//Print the triangle
void printTriangle(struct point *ptr)
{
    int i=0;
    for (i=0; i<3; i++)
    {
        printPoint(ptr[i]);
    }
}

//Print the triangle
void printPoint(struct point pt)
{
    printf("[%d %d]; ", pt.x, pt.y);
}

