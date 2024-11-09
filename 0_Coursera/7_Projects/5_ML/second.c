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
    printf("\n Traing data: train[3][1] = %f \n", train[3][1]);
    for (size_t i=0; i<5; ++i)
    {
        float x = train[i][0];
        float y = x * w;
        float d = y - train[i][0];
        result += d * d;
        printf("x = %f, y = %f, dist = %f, train[0][i] = %f, result = %f \n", x, y, d, train[0][i], result);
    }
    return 0;
}
