#include<stdio.h>
double avgTemp(double *temps, int numOfTemps);

int main(void)
{
	double temperatures[4] = {1.3, 2.5, 5.7, 6.5};
	double average = avgTemp(temperatures, 4);
	printf("Average temp is %0.2lf ", average);
	return 0;
}

double avgTemp(double *temps, int numOfTemps)
{
	double result = 0;
	int i;
	for (i=0; i<numOfTemps; i++)
	{
		result = result + temps[i];
	}
	result = result / (double) numOfTemps;
	return result;
}
