#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Sigmoid activation function
float sigmoid(float x)
{
    return 1.f / (1.f + expf(-x));
}

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
float cost(float w1, float w2, float b)
{
    float result = 0.0f;
    for (size_t i=0; i<train_count; ++i)
    {
        float x1 = train[i][0];
        float x2 = train[i][1];
        float y = sigmoid(x1 * w1 + x2 * w2) + b;
        float d = y - train[i][2];
        result += d * d;
    }
    result = result / train_count;
    return result;
}
//Main here
int main()
{
    for (float x=-10.f; x<=10.f; x+=1.f)
    {
        printf("%f -> %f \n", x, sigmoid(x));
    }
    srand(69);

    float w1 = random_float();
    float w2 = random_float();
    float b = random_float();           //ADD the BIAS term also

    float eps = 0.1;
    float rate = 0.1;
    for (size_t i=0; i<1000; ++i)
    {
        float c = cost(w1, w2, b);
        printf("w1 = %f, w2 = %f, b = %f, c = %f\n", w1, w2, b, c);
        float dw1 = (cost(w1 + eps, w2, b) - c)/ eps;
        float dw2 = (cost(w1, w2 + eps, b) - c) / eps;
        float db = (cost(w1, w2, b + eps) - c) / eps;
        w1 -= rate * dw1;
        w2 -= rate * dw2;
        b -= rate * db;
    }

    printf("w1 = %f, w2 = %f, b = %f, c = %f\n", w1, w2, b, cost(w1, w2, b));

    for (size_t i=0; i<2; ++i)
    {
        for (size_t j=0; j<2; ++j)
        {
            printf("%zu | %zu = %f \n", i, j, sigmoid(i*w1 + j*w2));
        }
    }
    return 0;
}
