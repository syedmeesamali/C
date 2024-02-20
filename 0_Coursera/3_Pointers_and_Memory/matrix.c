#include<stdio.h>
int main()
{
    int mat[2][3];
    int row, col;
    for(row=0; row<2; row++)
    {
        for (col=0; col<3; col++)
        {
            scanf("%d", &mat[row][col]);
        }
    }


    for(row=0; row<2; row++)
    {
        for (col=0; col<3; col++)
        {
            printf("%d ", mat[row][col]);
        }
        printf("\n");
    }
    return 0;
}
