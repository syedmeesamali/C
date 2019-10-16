#include <stdio.h>

int main()
{

    /*
    int doses[] = {1, 3, 2, 1000};
    printf("Issue doses %i", 3[doses]);
    return 0;
    */
    char name[40];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Name is %s", name);
    return 0;
}
