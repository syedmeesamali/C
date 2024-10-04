#include<stdio.h>
int main()
{
    FILE *fp;
    int r;
    const char filename[] = "b.txt";
    const char data[] = "abcdef12345\n";
    char buffer[16];
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Unable to open file %s for writing .... \n", filename);
        return 1;
    }
    printf("File is opened for writing. \n");
    r = fwrite(data, 1, 12, fp);
    if (r != 12)
    {
        fprintf(stderr, "Unable to write 12 bytes to %s.\n", filename);
        fclose(fp);
        return 1;
    }
    printf("Wrote %d bytes to %s.\n", r, filename);
    r = fclose(fp);
    if (r != 0)
    {
        fprintf(stderr, "Unable to close %s. \n", filename);
        return 1;
    }

    r = fread(buffer, 1, 16, fp);
    if (r != 16)
    {
        if (feof(fp))
        {
            printf("Read %d bytes from %s.\n", r, filename);
        }
        else 
        {
            r = ferror(fp);
            printf("ferror() returned %d.\n", r);
        }
    }
    r = fclose(fp);
    return 0;
}
