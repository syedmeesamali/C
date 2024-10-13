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
    //1. Check for the buffer issues and allocation is done or NOT
    if (buffer == NULL)
    {
        fprintf(stderr, "Unable to allocate space of 32 chars.\n");
        exit(1);
    }
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
    //2. Check for file opening issues
    if (fp == NULL)
    {
        fprintf(stderr, "Unable to open file %s for writing .... \n", filename);
        return 1;
    }
    fwrite(buffer, 1, index, fp);
    free(buffer);
    fclose(fp);
    printf("\n%s is created!", filename);
    return 0;

}
