/* C Advanced Programming
Dynamic memory allocation for the structs.
*/
#include <stdio.h>

struct threedpoint
{
    float x;
    float y;
    float z;
};

void readPoint(struct threedpoint *pt);
void printPolygon(struct threedpoint *ptr);
void printPoint(struct threedpoint pt);

//Main function
int main(void)
{
	struct threedpoint polygon[3];
    readPoint(&polygon[0]);
    printPoint(polygon[0]);
    readPoint(&polygon[1]);
    printPoint(polygon[1]);
    readPoint(&polygon[2]);
    printPoint(polygon[2]);
    printPolygon(polygon);
	return 0;
}

//Read the coordinate points
void readPoint(struct threedpoint *pt)
{
    printf("Enter x y z: ");
    scanf("%lf %lf %lf", &pt->x, &pt->y, &pt->z);
}

//Print the whole structure
void printPolygon(struct threedpoint *ptr)
{
    printf("\n-----------\n");
    for (int i=0; i<3; i++)
    {
        printPoint(ptr[i]);
    }
}

//Print the individual point
void printPoint(struct threedpoint pt)
{
    printf("\n-----------\n");
    printf("x = %lf, y = %lf, z = %lf \n", pt.x, pt.y, pt.z);
}
