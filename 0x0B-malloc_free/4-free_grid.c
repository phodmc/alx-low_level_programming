#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional array
* @grid: a 2 dimensional array pointer
* @height: height of 2d array
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
