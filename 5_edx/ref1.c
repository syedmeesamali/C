#include<stdio.h>

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
    printf("Your message was %d long", len);
	return 0;
} //End of main
