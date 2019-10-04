#include <stdio.h>
void go_south_east(int* lat, int* lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main()
{
    int latitude = 30;
    int longitude = 45;

    go_south_east(&latitude, &longitude);
    printf("Now lat is: %i and long is %i\n", latitude, longitude);
    printf("No change from declared values .... ))))");
    return 0;
}
