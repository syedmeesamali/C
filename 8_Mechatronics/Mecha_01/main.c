#include <stdio.h>

int main()
{
    int miles, yards;
    float km;
    miles = 26;
    yards = 285;
    km = 1.069 * (miles + (yards / 1760.0));

    printf("A marathon is %f KM\n", km);
    return 0;
}
