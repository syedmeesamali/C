#include<stdio.h>
#include<stdlib.h>

//Structs here
struct student {
    char name[50];
    int age;
    struct student *next;
} student1 ={"shahg", 38, NULL};


//Function prototypes here


//Main function
int main()
{
   // struct student second = {"ali", 28, NULL};
    struct student first = {"meesam", 35, NULL};
    struct student prints;
    printf("%s with age %d and next is %p\n", student1.name, first.age, student1.next);
    return 0;
}
