#include<stdio.h>
#define DEBUG

//Simple ref. function
int process(int i, int j, int k)
{
    return i + j + k;
}

//Main function
int main(void)
{
    int i, j, k, nread;
    nread = scanf("%d %d %d", &i, &j, &k);

    #ifdef DEBUG
        fprintf(stderr, "Number of integers read = %i \n", nread);
        fprintf(stderr, "i = %i, j = %i, k = %i \n", i, j, k);
    #endif // DEBUG
    printf("%i \n", process(i, j, k));
    return 0;
}
