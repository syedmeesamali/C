#include<stdio.h>
#include<stdlib.h>

//Define structs here first
struct student {
    char name[50];
    int age;
    struct student *next;
};

//Define prototypes here
struct student *createStudent(char studentName[], int studentAge);
int main()
{
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old. \n", studptr -> name, studptr -> age);
    free(studptr);
    return 0;
}


//The main create student function below
struct student *createStudent(char studentName[], int studentAge)
{
    struct student *ptr;
    ptr = (struct student *)malloc(sizeof(struct student));     //Allocate memory
    char refName[50];
    int i = 0;
    while (studentName[i] != '\0')
    {
        refName[i] = studentName[i];
        printf("%c \n", refName[i]);
        i++;
    }
    ptr -> name = refName[50];
    ptr -> age = studentAge;
    ptr -> next = NULL;
    return ptr;
}
