#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   int m = 0; int n = 0;
    int i = 0; int j = 0;
    char transpose[6][6];
    char matrix[6][6] ={  "ALOVEM",
                          "KGIVEP",
                          "AFSWGQ",
                          "NRIUCS",
                          "OLKODT",
                          "ZLILEM", };  //Below is a list to be searched within main cross-board letters
    char search[4][9] ={"LOVE","ISI","GIVE","NO",};
    printf("Original matrix print: \n");
    for (m=0; m<6; m++)
    {  for (n=0; n<6; n++)
        { printf("%c", matrix[m][n]);
        } printf("\n");  }
    printf("Words found in matrix: \n");
    for (i=0; i<4; i++)
    {  for (j=0; j<6; j++)
        {   if (strstr(matrix[j], search[i]))
            {   printf("Horizontally Found: %s \n", search[i]);
                break;   } }
    }
    for (i=0; i<6; i++)
    {   for (j=0; j<6; j++)
        {  transpose[i][j] = matrix[j][i];   }
    }
    for (i=0; i<4; i++)
    {   for (j=0; j<6; j++)
        {   if (strstr(transpose[j], search[i]))
            {   printf("Vertically Found: %s \n", search[i]);
                break;   } }
    } return 0;  }

