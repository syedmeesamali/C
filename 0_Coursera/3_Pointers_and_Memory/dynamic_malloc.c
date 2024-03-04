#include<stdio.h>
char * allocateString(int);
int main()
{
    int lenLight, lenDark;
    char *strLight, *strDark;
    scanf("%d %d", &lenLight, &lenDark);
    allocateString(lenLight);
    return 0;
}

//Allocate characters function
char *allocateString(int numChars)
{
    char * ptr;
    printf("\nLight chars are %d\n", numChars);
    return ptr;
}
