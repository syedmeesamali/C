#include <stdio.h>

int main()
{

    /*
    int doses[] = {1, 3, 2, 1000};
    printf("Issue doses %i", 3[doses]);
    return 0;
    */
    int i = 0;
    while (i < 100)
    {
        if (i % 3 == 0 & i % 5 == 0)
        {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0)
        {
            printf("Fizz\n");
        } else if (i % 5 == 0)
        {
            printf("Buzz\n");
        } else
        {
            printf("%d \n", i);
        }
        i++;
    }
    return 0;
}
