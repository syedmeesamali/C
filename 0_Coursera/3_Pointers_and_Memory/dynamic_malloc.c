#include<stdio.h>
#include<stdlib.h>
char * allocateString(int);
int main()
{
    int lenLight, lenDark;
    char *strLight, *strDark;
    scanf("%d %d", &lenLight, &lenDark);
    strLight = allocateString(lenLight);    //allocate memory to store the light variable
    strDark = allocateString(lenDark);      //allocate memory for the dark label variable
    scanf("%s", strLight);
    scanf("%s", strDark);
    printf("Local settings: %s - %s\n", strLight, strDark);
    free(strLight);
    free(strDark);
    
    return 0;
}

//Allocate characters function
char *allocateString(int numChars)
{
    char * ptr;
    ptr = (char *) malloc(numChars * sizeof(char));
    return ptr;
}
