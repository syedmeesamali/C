#include <stdio.h>

int main()
{
    int i,j,N,M;
    float a[100][100], b[100][100];
    printf("Enter the size of matrix \n");
    scanf("%d %d", &N, &M);
    for (i=1; i<=N; i++)
    {
        for (j=1; j<=M; j++)
        {
            printf("Insert item for [%d] row and [%d] col: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    printf("\nMatrix transpose will be as below:");
    for (j=1; j<=M; j++)
    {
        for (i=1; i<=N; i++)
        {
            b[j][i] = a[i][j];
        }
    }

    for (i=1; i<=N; i++)
    {
        for (j=1; j<=M; j++)
        {
            printf("%f | ", b[i][j]);
        }
    }
    return 0;
}



