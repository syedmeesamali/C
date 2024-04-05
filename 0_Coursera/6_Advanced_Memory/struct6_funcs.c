/* C Advanced Programming - Datatypes
Structs in C and how they connect with Functions.
*/
#include <stdio.h>
//Struct of student
struct student
{
    char fName[30];
    char lastName[30];
    int bithYear;
    double avgGrade;
};

void printStudent(struct student stud);

//Main function
int main(void)
{
	struct student me = {"meesam", "ali", 1986, 3.55};
	struct student you = {"ali", "shah", 1988, 3.60};
	printStudent(me);
	printStudent(you);
	return 0;
}

//Function to print the student.
void printStudent(struct student stud)
{
    printf("%s %s was born in %d and has an average grade of %lf.\n", stud.fName, stud.lastName, stud.bithYear, stud.avgGrade);
}
