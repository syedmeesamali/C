#include<stdio.h>
int main(void)
{
	int userTemp;
	char unit;
	double convertedTemp;
	scanf("%d %c", &userTemp, &unit);
	if (unit == 'C')
	{
		//Function to calculate the fahrenheit
		convertedTemp = double(degToF(userTemp));
//		convertedTemp = 35.5;
		printf("Temp in F is %0.2\n", convertedTemp);
	} else if (unit == 'F')
	{
		//Function for Centigrade calculation
		convertedTemp = double(FtoDeg(userTemp));
//		convertedTemp = 35.5;
		printf("Temp in C is %0.2\n", convertedTemp);
	}
	return 0;
} //End of main

//Degree to fahrenheit
double degToF(int x)
{
	return((9.0/5)*x + 32);
}

//Fahrenheit to degrees
double FtoDeg(int x)
{
	return(5.0/9*(x-32));
}
