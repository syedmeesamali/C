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

//Function prototypes
void readStudent(struct student *studptr);
void printStudent(struct student stud);

//Main function
int main(void)
{
	struct student me;
	readStudent(&me);
	printStudent(me);
	return 0;
}

//Function to read the student values
void readStudent(struct student *studptr)
{
    printf("\nEnter a student record: \n");
    printf("First name: ");
    scanf("%s", studptr -> fName);
    printf("Last name: ");
    scanf("%s", studptr -> lastName);
    printf("Birthyear: ");
    scanf("%d", &studptr -> birthYear);
    printf("Avg Grade: ");
    scanf("%lf", &studptr -> avgGrade);
}

//Function to print the student.
void printStudent(struct student stud)
{
    printf("%s %s was born in %d and has an average grade of %lf.\n", stud.fName, stud.lastName, stud.birthYear, stud.avgGrade);
}
