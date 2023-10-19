#include<stdio.h>
#include<time.h>

int main()
{
	struct tm *clock;
	time_t now;
	time(&now);
	clock = localtime(&now);
	printf("Time details");
	printf("Day of year: %d\n", clock -> tm_yday);
	printf("Computer time is %ld\n", now);
	printf("%s", ctime(&now));
	return 0;
}
