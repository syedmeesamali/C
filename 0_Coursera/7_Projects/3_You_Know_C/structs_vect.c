#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define GRID_SIZE 20
#define GRID_CENTER (GRID_SIZE / 2)


//Structs
typedef struct
{
    float x;
    float y;
} vec_2d;

void clear_grid(char grid[GRID_SIZE][GRID_SIZE]);

//Main program
int main()
{
    printf("%d", sizeof(vec_2d));
    return 0;
}


//Clear the grid function
void clear_grid(char grid[GRID_SIZE][GRID_SIZE])
{
    for (int row = 0; row < GRID_SIZE; row++)
    {
        memset(grid[row], ' ', GRID_SIZE);
    }
}
