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
    struct student learner;
    printf("Enter the first naeme: ");
    scanf("%s", learner.firstName);
    printf("\nEnter the birth year: ");
    scanf("%d", &learner.birthYear);
    printf("\n%s was born in Year - %d", learner.firstName, learner.birthYear);
    return 0;
}
