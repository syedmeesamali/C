#include<stdio.h>
#include<stdlib.h>

float rand_float(void)
{
    return (float) rand() / (float) RAND_MAX;
}

int main()
{
    // y = x * w + b
    float w = rand_float();
    printf("Some random float is %f.\n", w);
    return 0;
}
