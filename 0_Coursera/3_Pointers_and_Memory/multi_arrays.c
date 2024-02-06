#include<stdio.h>
int main()
{
    short a[3] = {15, 29, 35};
    short b[2] = {39, 42};
    short c[4] = {1214, 1372, 2839, 39};
    short * arrays[3] = {a, b, c};  //a is address of a, b address of b and so on
    printf("Array-1 at %p, array-2 at %p, array-3 at %p\n", arrays[0], arrays[1], arrays[2]);
    printf("Elements of array-3 now are %d, %d, %d, %d\n", c[0], c[1], c[2], c[3]);
    //Now we can change first element of 3rd array i.e., c[4] as below.
    *arrays[2] = 1512;
    printf("Elements of array-3 now are %d, %d, %d, %d\n", c[0], c[1], c[2], c[3]);
    return 0;
}
