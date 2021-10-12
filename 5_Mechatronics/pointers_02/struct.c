#include<stdio.h>
struct Student
{
    char name[40];
    char major[40];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.20;
    strcpy(student1.name, "Meesam");
    strcpy(student1.major, "Robotics");
    printf("\nData for Student-1: %s", student1.name);
    printf("\n%lf GPA, age is %d and having majors in %s", student1.gpa, student1.age, student1.major);
    return 0;
}
