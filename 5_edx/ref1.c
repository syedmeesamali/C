#include<stdio.h>
#include<math.h>

int main(void)
{
	char ch;
	int len = 0;
	printf("Enter some message");
	ch = getchar();
	while (ch != '\n')
	{
		len++;
		ch = getchar();
	}
	printf("Your message was %d long \n", len);
	double a = 2.5;
	double a2 = pow(a, 2);
	printf("%.2lf squared is %.2lf \n", a, a2);
	return 0;
} //End of main
