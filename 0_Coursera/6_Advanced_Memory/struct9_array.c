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

//Triangle struct
struct Triangle
{

};


//Main function
int main(void)
{
	struct point triangle[3]
	readPoint(&triangle[0]);
	readPoint(&triangle[1]);
	readPoint(&triangle[2]);
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

    }
}

//Print the triangle
void printPoint(struct point pt)
{
    printf("%d %d", pt.x, pt.y);
}

