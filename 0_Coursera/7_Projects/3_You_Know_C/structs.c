#include<stdio.h>
struct S
{
    int i;
    char c;
} s;

int main()
{
    printf("%d", sizeof(*(&s)));
    return sizeof(*(&s));
    return 0;
}
