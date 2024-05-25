/* C Advanced Programming
Dynamic memory allocation for the structs.
*/
#include <stdio.h>
struct threedpoint
{
    float x;
    float y;
    float z;
} point1 = {3.55, 2.35, 8.99};

void printPoint(struct threedpoint pt);
void readPoint(struct threedpoint *pt);
void printPolygon(struct threedpoint *ptr);

//Main function
int main(void)
{
	struct threedpoint polygon[3];
    readPoint(&polygon[0]);
    readPoint(&polygon[1]);
    readPoint(&polygon[2]);
    printPolygon(polygon);
	return 0;
}

//Read the coordinate points
void readPoint(struct threedpoint *pt)
{
    printf("Enter x y z: ");
    scanf("%f %f %f", &pt->x, &pt->y, &pt->z);
}

//Print the whole structure
void printPolygon(struct threedpoint *ptr)
{
    printf("\nBelow are coordinates entered for Polygon!\n");
    for (int i=0; i<3; i++)
    {
        printPoint(ptr[i]);
    }
}

//Print the individual point
void printPoint(struct threedpoint pt)
{
    printf("x = %f, y = %f, z = %f \n", pt.x, pt.y, pt.z);
}
