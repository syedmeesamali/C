#include <stdio.h>
#define val1 0x01
#define val2 0x02

int main()
{
    char str[4] = "ali";
    int a = 25;
    int val3;
    int val4;
    int *p = &a;        //Pointer
    val3 = val1 | val2;
    val4 = val1 & val2;
    printf("\n - a is %d", a);
    printf("\n - pointer to a is %d", p);
    printf("\n - address of a is %d\n", &a);
    printf("\n - Val3 is %d \n", val3);
    printf("\n - Val4 is %d \n", val4);

    char myString[] = "\n - This is full \t string including tab. \n";
    for (int i=0; i<4; i++)
    {
        printf("%c", str[i]);
    }
    printf("\nPrinting of chars is done!");
    printf("\nSTRART-- \n %s ---END \n", myString);
    return 0;
}
