#include <stdio.h>
#include <stdlib.h>

int main()
{
    float latitude; float longitude;
    char info[80];
    int start = 0;
    puts("data=[");
    while (scanf("%f,%f,%79[^\n]",&latitude,&longitude,info) == 3)
    {
        if (start) {  printf(",\n"); }
        else {  start = 1;  }
        printf("{lat: %f, long: %f, info: '%s'}",latitude,longitude,info);
    }
    puts("\n]");
    return 0;

}
