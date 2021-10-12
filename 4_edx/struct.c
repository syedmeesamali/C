#include<stdio.h>

double square(double x)
{
	return x * x;
}

int main(void)
{
	double a = 2.5;
	double aSquared = square(a);
	printf("%.2lf squared = %.2lf\n", a, aSquared);
	return 0;
}
