#include<stdio.h>
#include<stdlib.h>

//Make originally unsecure code to a secure version

int main()
{
    char *buffer;
    int index;
    int ch;         //Use int and not a character or char
    int r;
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

    r = fwrite(buffer, 1, index, fp);
    //3. Check for file writing issues
    if (r != index)
    {
        fprintf(stderr, "Unable to write 32 bytes to %s.\n", filename);
        fclose(fp);
        return 1;
    }
    //4. Buffer should be freed after usage (malloc memory).
    free(buffer);

    //5. File closing issues.
    r = fclose(fp);
    if (r != 0)
    {
        fprintf(stderr, "Unable to close %s. \n", filename);
        return 1;
    }

    printf("\n%s is created and %d bytes were written to it!", filename, index);
    return 0;

}
