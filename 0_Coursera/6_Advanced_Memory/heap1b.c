/* C Programming - Advanced Memory Management
Some heap security vulnerabilities
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char * password;
    char * other_ptr;
    password = (char *) malloc(10 * sizeof(char));
    printf("Enter the password: ");
    scanf("%s", password);
    printf("\nPassword entered is: %s\n", password);
    other_ptr = password;
    free(password);
    printf("\nPassword now after free is: %s\n", password);
    printf("\nPassword saved in other location however is !!! %s\n\n", other_ptr);
    for (int i=0; i<10; i++)
    {
        printf("%c", other_ptr[i]);
    }
    return 0;
}


