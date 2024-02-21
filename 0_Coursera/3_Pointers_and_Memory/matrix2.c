#include<stdio.h>
int main()
{
    int mat[2][3];
    int i, j;
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    //Print the matrix as required
    printf("Output matrix is!\n");
    for (i=1; i>=0; i--)
    {
        for (j=2; j>=0; j--)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}//End of main
