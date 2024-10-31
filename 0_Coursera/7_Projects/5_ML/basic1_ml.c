#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define train_count (sizeof(train))/(sizeof(train[0]))

float train[][2] = {
    {0, 0},             //For zero predict 0
    {1, 2},             //For 1 it is 2
    {2, 4},             //For 2 it is 4
    {3, 6},             //For 3 it is 6
    {4, 8},             //Pattern emerges .... so for 4 it is 8 ... duplicates
};

//Random floats func
float random_float(void)
{
    return (float) rand() / (float) RAND_MAX;
}

//Main cost function - w and b are main parameters (b as bias)
float cost(float w, float b)
{
    float result = 0.0f;
    for (size_t i=0; i<train_count; ++i)
    {
        float x = train[i][0];
        float y = x * w + b;                //As per original logic of ML
        float d = y - train[i][1];      //Distance of expected and original
        result += d * d;
    }
    result = result / train_count;
    return result;
}
//Main here
int main()
{
    // y = x * w
    srand(69);
    //float w = random_float()*10.0f;
    float w = 5.0f;     //Main original w parameter
    float b = 5.0f;     //New additional parameter
    float eps = 1e-3;
    float rate = 0.1;
    printf("Cost: %f\n");
    for (size_t i=0; i<=200; ++i)
    {
        float c = cost(w, b);
        float dw = (cost(w + eps, b) - c) / eps;          //This is definition of a derivative (f(h+a) - f(h) / a)
        float db = (cost(w, b + eps) - c) / eps;
        w = w - rate * dw;
        b = b - rate * db;
        printf("Cost: %f, w = %f, b = %f\n", cost(w, b), w, b);
    }
    return 0;
}
