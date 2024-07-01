#include<stdio.h>
#include<stdlib.h>
typedef struct student {
    char name[40];
    int age;
} stud1;


int main()
{
    stud1 ali = {"meesam", 38};
    printf("Student %s with age %d already enrolled!\n", ali.name, ali.age);
    return 0;
}
