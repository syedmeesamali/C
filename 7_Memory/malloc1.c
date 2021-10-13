#include<stdio.h>
#include<string.h>

int main(void)
{
    char s;
    printf("\nFirst time malloc directly!\n");
    scanf("%c", &s);
    char *t = malloc(strlen(s)+1);
    strcpy(t, s);
    t[0] = toupper(t[0]);
    printf("\n s = %s", s);
    printf("\n t = %s", t);
    return 0;
}
