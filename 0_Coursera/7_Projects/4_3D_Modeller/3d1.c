#include<stdio.h>
#include<raylib.h>

typedef struct {
    Vector3 pos;
    Vector3 size;
    Vector3 angle;
    float corner_radius;
    float blob_amount;
    struct {
        uint8_t r, g, b;
    } color;
    struct {
        uint8_t x,y,z;
    } mirror;
    bool subtract;
} Shape;



int main()
{

    printf("Work ongoing ....\n");
    return 0;
}
