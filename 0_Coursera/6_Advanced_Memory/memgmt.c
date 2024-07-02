#include<stdio.h>
#include<stdlib.h>

//DOB struct to be used within another struct as nested
struct dob {
        short day;
        short month;
        short year;
};

//Main struct to cover another struct already defined
typedef struct student {
    char name[40];
    int age;
    //Nested structure example
    struct dob dt_birth;
} stud1;


//Main function
int main()
{
    stud1 ali = {"meesam", 38, {1, 1, 1990}};
    printf("Student %s with age %d already enrolled!\n", ali.name, ali.age);
    printf("His DOB is %d for month %d and year %d. \n", ali.dt_birth.day, ali.dt_birth.month, ali.dt_birth.year);
    return 0;
}
