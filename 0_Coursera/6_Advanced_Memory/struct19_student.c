#include<stdio.h>
#include<stdlib.h>

//Structs here
struct student {
    char name[50];
    int age;
    struct student *next;
};


//Function prototypes here


//Main function
int main()
{
   // struct student second = {"ali", 28, NULL};
    struct student first = {"meesam", 35, NULL};
    struct student prints;
    printf("%s with age %d\n", first.name, first.age);
    return 0;
}
