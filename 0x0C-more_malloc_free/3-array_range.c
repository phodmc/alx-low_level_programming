#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: minimum integer value
* @max: maximum integer value
* Return: integer pointer
*/

int *array_range(int min, int max)
{
	int *array;
	int diff, i;

	if (min > max)
		return (NULL);

	diff = (max - min) + 1;

	array = malloc(sizeof(int) * diff);

	if (!array)
		return (NULL);

	for (i = 0; i < diff; i++)
		array[i] = min + i;

	return (array);
}
