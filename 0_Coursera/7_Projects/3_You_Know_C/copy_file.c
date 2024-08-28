#include<stdio.h>
//Simple file copy program
int main (int argc, char *argv[])
{
    FILE *in, *out;
    int c;
    if (argc != 3)
    {
        fprintf(stderr, "Need two file names!");
        return 1;
    }

    //If input is null or not existent. Have to create this file manually.
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "can't read %s. \n", argv[1]);
        return 1;
    }

    //Will create automatically based on command-line arguments.
    if ((out = fopen(argv[2], "w")) == NULL)
    {
        fprintf(stderr, "can't write %s. \n", argv[1]);
        return 1;
    }

    //Copy all contents till EOF signal.
    while ((c = getc(in)) != EOF)
    {
        putc(c, out);
    }
    printf("File has been copied!\n");
    fclose(in);
    fclose(out);

} //End of main
