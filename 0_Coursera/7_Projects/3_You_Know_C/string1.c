#include<stdio.h>
int main()
{
    char x[] = "hello";
    int i = 0;
    int py_len();
    printf("%s has length of %d. \n", x, py_len(x));
    for (int i=py_len(x); i >= 0; i--)
    {
        printf("%c", x[i]);
    }
    printf("\n");
    return 0;
}

//Self counter
int py_len(self)
char self[];
{
    int i;
    for (i=0; i<self[i]; i++);
        return i;
}
