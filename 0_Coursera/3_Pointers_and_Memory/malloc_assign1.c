#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *a, *b;     //Declare two int pointers
    float *c;       //Float pointer
    a = (int *) malloc(sizeof(int));    //Typecast and declare memory for int in HEAP
    *a = 1;         //Put int value at memory address pointed by a
    b = (int *) malloc(sizeof(int));    //Typecast and declare memory for int in HEAP
    *b = 2;         //Put int value at memory address pointed by a
    free(a);
    free(b);
    c = (float *) malloc(sizeof(int));    //Typecast and declare memory for int in HEAP
    *c = 3.5;         //Put int value at memory address pointed by a
    free(c);
    printf("a = %d, b = %d, c = %lf\n", *a, *b, *c);
    return 0;
}
