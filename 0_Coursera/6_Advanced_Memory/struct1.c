#include<stdio.h>
struct student 
{
    char firstName[30];
    char lastName[30];
    int birthYear;
    double grade;
};

int main()
{
    struct student me = {"Meesam", "Ali", 1990, 3.55};
    printf("My name is %s %s and birth year is %d with grade %lf\n", me.firstName, me.lastName, me.birthYear, me.grade);
    return 0;  
}
