#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define train_count (sizeof(train))/(sizeof(train[0]))

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
    //srand(time(0));
    srand(69);
    float w = random_float()*100.0f;
    for (size_t i=0; i<train_count; ++i)
    {
        float x = train[i][0];
        float y = x * w;            //As per original logic of ML
        printf("actual: %f, expected: %f\n", y, train[i][0]);
    }
    return 0;
}
