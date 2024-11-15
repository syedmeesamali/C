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

#define train_count 5

//Cost function
float cost(float w)
{
    float result = 0.0f;
    for (size_t i=0; i<5; ++i)
    {
        float x = train[i][0];
        float y = x * w;
        float d = y - train[i][0];
        result += d * d;
        //printf("x = %f, y = %f, dist = %f, train[i][1] = %f, result = %f \n", x, y, d, train[i][1], result);
    }
    return result;
}

//Get random floats
float rand_float(void)
{
    return (float) rand() / (float) RAND_MAX;
}

int main()
{
    srand(70);
    float w = rand_float() * 10.0f;
    // y = x * w + b
    float eps = 1e-3;
    float dcost = (cost(w + eps) - cost(w)) / eps;
    printf("\n Cost(w) = %f \n", cost(w));
    w = w - dcost;
    printf("\n Cost(w) = %f \n", cost(w));
    return 0;
}
