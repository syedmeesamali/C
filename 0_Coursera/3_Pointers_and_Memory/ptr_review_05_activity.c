/* C Programming - POINTERS and MEMORY Management Course 4

*/
#include <stdio.h>
void myFun(int *p, int *q);

int main(void)
{
    int i = 1;
    int j = 2;
    myFun(&i, &j);
    printf("%d %d \n", i, j);
    myFun(&i, &j);
    printf("%d %d \n", i, j);
    myFun(&i, &j);
    printf("%d %d \n", i, j);
    return 0;
}

//Function definition
void myFun(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp + *q;
}
