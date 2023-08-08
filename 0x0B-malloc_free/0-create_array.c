#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: size of array
* @c: chars to fill in array
* Return: char pointer (array)
*/

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0 || !array)
		return (NULL);

	for (; i < size; i++)
		array[i] = c;

	return (array);
}
