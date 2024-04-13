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
#define MAX_LINE_LENGTH 15
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
    printf("\nFile created successfully!\n");
    fclose(file);
}

// Merge function for merging two sorted arrays
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        } else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of L[], if any
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    // Copy the remaining elements of R[], if any
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
} //End of merge

//Merge Sort function declaration
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
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
        if (filePointers[i] == NULL)
        {
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
void externalSort(char* inputFileName, char* outputFileName, int bufferSize, int numInts)
{
    clock_t start = clock();
    FILE* inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL)
    {
        perror("Error opening input file");
        exit(EXIT_FAILURE);
    }
    int numTempFiles = 5;       //5 temporary files
    printf("\nInput file reading done...\n");
    fclose(inputFile);

    // Create and sort chunks of data into temporary files
    char tempFileName[MAX_FILENAME_LENGTH];
    while (!feof(inputFile))
    {
        int* buffer = malloc(bufferSize * sizeof(int));
        if (buffer == NULL)
        {
            perror("Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        int numRead = fread(buffer, sizeof(int), bufferSize, inputFile);

        mergeSort(buffer, 0, numRead - 1);
        sprintf(tempFileName, "temp%d.txt", numTempFiles);


        FILE* tempFile = fopen(tempFileName, "w");
        if (tempFile == NULL)
        {
            perror("Error creating temporary file");
            exit(EXIT_FAILURE);
        }
        for (int i = 0; i < numRead; i++)
        {
            fprintf(tempFile, "%d\n", buffer[i]);
        }
        fclose(tempFile);
        free(buffer);
        numInts += numRead;
        numTempFiles++;
    }

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
    int numInts = 50;
    generateRandomInputFile(inputFileName, numInts);
    externalSort(inputFileName, outputFileName, bufferSize, numInts);
    printf("\nDone\n");
    return 0;
} // end main()
