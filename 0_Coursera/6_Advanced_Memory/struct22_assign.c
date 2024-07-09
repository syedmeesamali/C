#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Define structs here first
struct student {
    char name[50];
    int age;
    struct student *next;
};

//Define prototypes here
struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student *end, struct student *newStudptr);
int main()
{
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;
    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Meesam", ageP);
    end = start;            //As at this moment there is no other end. 
    newStudptr = createStudent("ali", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("shah", ageM);
    end = append(end, newStudptr);
    printf("%s is %d years old. \n", start -> name, start -> age);
    printf("%s is %d years old. \n", start -> next -> name, start -> next -> age);
    printf("%s is %d years old. \n", start -> next -> next -> name, start -> next -> next -> age);
    tmp = start -> next;
    free(start);
    start = tmp;
    tmp = start -> next;
    free(start);
    free(tmp);
    return 0;
}
//The main create student function below
struct student *createStudent(char studentName[], int studentAge)
{
    struct student *ptr;
    ptr = (struct student *)malloc(sizeof(struct student));     //Allocate memory
    strcpy(ptr -> name, studentName);
    ptr -> age = studentAge;
    ptr -> next = NULL;
    return ptr;
}
//Append function
struct student *append(struct student *end, struct student *newStudptr)
{
    end -> next = newStudptr;
    end = newStudptr;
    return end;
}
