#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - create and return a 2 dimensional array
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int row, col, **pointer;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointer = malloc(height * sizeof(*pointer));
	if (!pointer)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		pointer[row] = malloc(width * sizeof(int));
		if (!pointer[row])
			return (NULL);

		for (col = 0; col < width; col++)
			pointer[row][col] = 0;
	}

	return (pointer);
}




