#include <stdio.h>

int main()
{
    char str[4] = "ali";
    int a = 25;
    int *p = &a;        //Pointer
    printf("\n - a is %d", a);
    printf("\n - pointer to a is %d", p);
    printf("\n - address of a is %d\n", &a);

    char myString[] = "\n - This is full \t string including tab. \n";
    for (int i=0; i<4; i++)
    {
        printf("%c", str[i]);
    }
    printf("\nPrinting of chars is done!");
    printf("\nSTRART-- \n %s ---END \n", myString);
    return 0;
}
