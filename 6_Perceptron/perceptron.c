#include<stdio.h>
int activation(float x)
{
	if (x > 0)
    {
        return 1;
    } else
    {
        return -1;
    }
}

int main(void)
{
	float inputs[2] = {12, 4};
	float weights[2] = {0.5, -1};
	float sum = 0;

	for (int i=0; i<2; i++)
    {
        sum += inputs[i] * weights[i];
    }
	printf("Value of sum is: %3.2f", sum);

	float output = activation(sum);

	printf("\nFinal OUTPUT is : %3.2f", output);
	return 0;
} //End of main
