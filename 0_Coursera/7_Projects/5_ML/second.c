#include<stdio.h>
#include<stdlib.h>

//Our simple training data
float train[][2] = 
{
    {0, 0},
    {1, 2},
    {2, 4},
    {3, 6},
    {4, 8}
};

//Get random floats
float rand_float(void)
{
    return (float) rand() / (float) RAND_MAX;
}

int main()
{
    srand(70);
    float result=0.0f;
    float w = rand_float();
    // y = x * w + b
    
    for (size_t i=0; i<10; ++i)
    {
        float x = train[i][0];
        float y = x * w;
        float d = y - train[i][0];
        result += d * d;
        printf("x val = %f, y = %f, d = %f, result = %f.\n", x, y, d, result);
    }

    return 0;
}
