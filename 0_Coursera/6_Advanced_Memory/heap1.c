#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *password;
    char *other_ptr;
    password = (char *) malloc(10*sizeof(char));        //Allocate 10 chars
    printf("\nTrustworthy program!\n\n");
    printf("Enter password: ");
    scanf("%s", password);
    other_ptr = password;
    free(password);
    printf("\nPassword after free is %s\n", password);
    printf("\nBUt other pointer says ?? %s\n", other_ptr);
    for (int i=0; i<10; i++)
    {
        printf("%c", other_ptr[i]);
    }
    return 0;
}
