#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//OR-gate implementation
float train[][3] = {
    {0, 0, 0},
    {0, 1, 1},
    {1, 0, 1},
    {1, 1, 1},
};

#define train_count (sizeof(train))/(sizeof(train[0]))

//Random floats func
float random_float(void)
{
    return (float) rand() / (float) RAND_MAX;
}

//Main cost function - w and b are main parameters (b as bias)
float cost(float w1, float w2)
{
    float result = 0.0f;
    for (size_t i=0; i<train_count; ++i)
    {
        float x1 = train[i][0];
        float x2 = train[i][1];
        float y = x1 * w1 + x2 * w2;
        float d = y - train[i][2];
        result += d * d;
    }
    result = result / train_count;
    return result;
}
//Main here
int main()
{
    srand(69);

    float w1 = random_float();
    float w2 = random_float();
    float eps = 0.1;
    float rate = 0.1;
    for (size_t i=0; i<100; ++i)
    {
        float c = cost(w1, w2);
        printf("w1 = %f, w2 = %f, c = %f\n", w1, w2, c);
        float dw1 = (cost(w1 + eps, w2) - c)/ eps;
        float dw2 = (cost(w1, w2 + eps) - c) / eps;
        w1 -= rate * dw1;
        w2 -= rate * dw2;
    }
    return 0;
}
