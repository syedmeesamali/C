/* C Advanced Programming
Dynamic memory allocation for the structs.
*/
#include <stdio.h>
#include<stdlib.h>



struct threedpoint
{
    float x;
    float y;
    float z;
};

void readPoint(struct threedpoint *pt);
void printPoint(struct threedpoint pt);

//Main function
int main(void)
{
	struct threedpoint * polygon[3];
    readPoint(&polygon[0]);
    readPoint(&polygon[1]);
    readPoint(&polygon[2]);
	return 0;
}

void readPoint(struct threedpoint *pt)
{
    printf("Enter x: ");
    scanf("%lf", &pt->x);
    printf("Enter y: ");
    scanf("%lf", &pt->y);
    printf("Enter z: ");
    scanf("%lf", &pt->z);
}
