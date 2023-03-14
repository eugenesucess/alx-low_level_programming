#include "main.h"
#include <stdlib.h>

/**
* alloc_grid -> allocate amount of size needed for grid rendering
* @width: param1
* @height: param2
* Return: integer
*/

int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
      return NULL;
    grid = malloc(height * sizeof(int *));

    for(i = 0; i < height; i++)
    {
      grid[i] = malloc(width * sizeof(int *));

      if(grid[i] == NULL)
          return NULL;
      for(j = 0; j < width; j++)
      {
          grid[i][j]=0;
      }
    }
    return grid;
}
