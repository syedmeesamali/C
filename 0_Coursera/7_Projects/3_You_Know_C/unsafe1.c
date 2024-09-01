#include<stdio.h>
#include<stdlib.h>

//Make originally unsecure code to a secure version

int main()
{
    char *buffer;
    int index;
    char ch;
    const char filename[] = "challenge.txt";
    FILE *fp;

    buffer = (char *)malloc(sizeof(char)*32);       //Buffer for 32 chars only
    printf("Type some text: ");
    index = 0;
    while (ch = getchar())
    {
        *(buffer + index) = ch;
        index++;
        if (ch == '\n')
        {
            break;
        }
    } //End of while

    fp = fopen(filename, "w");
    fwrite(buffer, 1, index, fp);
    fclose(fp);
    printf("\n%s is created!", filename);
    return 0;
    
}
