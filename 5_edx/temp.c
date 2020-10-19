#include<stdio.h>
//Degree to fahrenheit
double degToF(int x)
{
	return ((9.0/5)*x + 32);
}

//Fahrenheit to degrees
double FtoDeg(int x)
{
	return (5.0/9*(x-32));
}

int main(void)
{
	int userTemp = 0;
	char unit;
	double convertedTemp = 1.0;
	scanf("%d %c", &userTemp, &unit);
	if (unit == 'C')
	{
		//Function to calculate the fahrenheit
		printf("Temp in C is %0.2f\n", degToF(userTemp));
	} else if (unit == 'F')
	{
		//Function for Centigrade calculation
		printf("Temp in F is %0.2f\n", FtoDeg(userTemp));
	}
	return 0;
} //End of main


