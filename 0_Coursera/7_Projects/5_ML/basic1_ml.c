#include<stdio.h>
#include<stdlib.h>

float train[][2] = {
    {0, 0},             //For zero predict 0
    {1, 2},             //For 1 it is 2
    {2, 4},             //For 2 it is 4
    {3, 6},
    {4, 8},
};

//Random floats func
float random_float(void)
{
    return (float) rand() / (float) RAND_MAX;
}

//Main here
int main()
{
    // y = x * w
    float w = random_float();
    printf("ML in C. Rand number = %f \n", w);
    return 0;
}
