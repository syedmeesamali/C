#include<stdio.h>
int main()
{
    char x[] = "hello";
    int i = 0;
    int py_len();
    while (x[i] != '\0')
    {
        printf("%c", x[i]);
        i++;
    }
    printf("Len was %d. \n", py_len(x));
    return 0;
}

//Self counter
int py_len(self)
char self[];
{
    int i;
    for (i=0; i<self[i]; i++)
    return i;
}
