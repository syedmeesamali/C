/* C Advanced Programming - Datatypes
Structs in C and how they connect with Functions.
*/
#include <stdio.h>
//Struct of student
struct student
{
    char fName[30];
    char lastName[30];
    int birthYear;
    double avgGrade;
};


//Main function
int main(void)
{
	struct student me;
	printf("Size of struct student is %zu \n", sizeof(me));
	printf("Size of struct portion first name is %zu \n", sizeof(me.fName));
	printf("Size of struct portion last name is %zu \n", sizeof(me.lastName));
	printf("Size of struct portion birth year (int) is %zu \n", sizeof(me.birthYear));
	printf("Size of struct portion avg grade (double) is %zu \n", sizeof(me.avgGrade));
	return 0;
}
