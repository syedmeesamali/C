/*The main program in ExternalSort.c program should call a function:
void externalSort(char* inputFileName, char* outputFileName, int bufferSize),
where "inputFileName" – the name of the input file containing the random ints.
"outputFileName" – the name of the output file containing the sorted ints.
"bufferSize" –the size of the internal buffer used by the internal sort function.
externalSort() function must use an external merge sort algorithm to sort the data in the input file
into numeric ascending order using a collection of temporary files to hold the intermediate results,
writing the sorted ints into the output file. externalSort() function should display the number of ints
found in the input file as well as the number of temporary files that were used during the sorting process.
These temporary files should be deleted by program when it terminates. externalSort() function must time its
activity reporting how much time it took to create the random number output file.

So, you should use the random number generator provided in Random.c (attached) rather than the built-in rand() function.
*/
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_FILENAME_LENGTH 256
#define MAX_LINE_LENGTH 100

//Generate the random input file name
void generateRandomInputFile(char* filename, int numInts)
{
    FILE* file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("Error creating input file");
        exit(EXIT_FAILURE);
    }
    srand(time(NULL));
    for (int i = 0; i < numInts; i++)
    {
        fprintf(file, "%d\n", rand());
    }
    fclose(file);
}

//Main merge sort files algorithm goes here
void mergeSortFiles(char* outputFile, char** tempFiles, int numFiles)
{
    FILE* outFile = fopen(outputFile, "w");
    if (outFile == NULL)
    {
        perror("Error opening output file");
        exit(EXIT_FAILURE);
    }

    FILE** filePointers = malloc(numFiles * sizeof(FILE*));
    if (filePointers == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // Open all temporary files for reading
    for (int i = 0; i < numFiles; i++)
    {
        filePointers[i] = fopen(tempFiles[i], "r");
        if (filePointers[i] == NULL) {
            perror("Error opening temporary file");
            exit(EXIT_FAILURE);
        }
    }

    int* buffer = malloc(numFiles * sizeof(int));
    if (buffer == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // Read initial values from temporary files
    for (int i = 0; i < numFiles; i++)
    {
        if (fgets(buffer[i], MAX_LINE_LENGTH, filePointers[i]) == NULL)
        {
            buffer[i] = -1;
        } else
        {
            buffer[i] = atoi(buffer[i]);
        }
    }

    // Perform k-way merge
    int mergedCount = 0;
    while (mergedCount < numFiles)
    {
        int minVal = INT_MAX;
        int minIndex = -1;
        // Find the minimum value among current values in buffer
        for (int i = 0; i < numFiles; i++)
        {
            if (buffer[i] != -1 && buffer[i] < minVal)
            {
                minVal = buffer[i];
                minIndex = i;
            }
        }
        if (minIndex == -1)
        {
            break; // No more values to merge
        }
        // Write minVal to output file
        fprintf(outFile, "%d\n", minVal);
        // Read next value from the file whose value was written
        if (fgets(buffer[minIndex], MAX_LINE_LENGTH, filePointers[minIndex]) == NULL)
        {
            buffer[minIndex] = -1;      // Reached end of file
            mergedCount++;
        } else
        {
            buffer[minIndex] = atoi(buffer[minIndex]);
        }
    }

    // Close all temporary files and clean up resources
    for (int i = 0; i < numFiles; i++)
    {
        fclose(filePointers[i]);
        remove(tempFiles[i]); // Remove temporary file after use
    }
    fclose(outFile);
    free(buffer);
    free(filePointers);
}

//Main external sort algorithm
void externalSort(char* inputFileName, char* outputFileName, int bufferSize)
{
    clock_t start = clock();
    // Count the number of integers in the input file
    FILE* inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL)
    {
        perror("Error opening input file");
        exit(EXIT_FAILURE);
    }
    int numInts = 0;
    int numTempFiles = 5;       //5 temporary files
    fclose(inputFile);
    char** tempFiles = NULL; // Array to store names of temporary files
    mergeSortFiles(outputFileName, tempFiles, numTempFiles);

    // Delete temporary files
    for (int i = 0; i < numTempFiles; i++)
    {
        remove(tempFiles[i]);
    }
    free(tempFiles);
    clock_t end = clock();
    double timeTaken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Number of integers in input file: %d\n", numInts);
    printf("Number of temporary files used: %d\n", numTempFiles);
    printf("Time taken to sort: %.4f seconds\n", timeTaken);
}


//Main function
int main()
{
    char inputFileName[MAX_FILENAME_LENGTH] = "input.txt";
    char outputFileName[MAX_FILENAME_LENGTH] = "output.txt";
    int bufferSize = 10; // Adjust buffer size as needed
    generateRandomInputFile(inputFileName, 50);
    externalSort(inputFileName, outputFileName, bufferSize);
    printf("\nDone\n");
    return 0;
} // end main()
