#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory for an array
* @nmemb: number of element the array will hold
* @size: number of bytes by each element
* Return: void pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *byte_ptr;
	unsigned int i, total;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	total = nmemb * size;

	array = malloc(total);
	if (!array)
		return (NULL);

	byte_ptr = (char *)array;
	for (i = 0; i < total; i++)
		byte_ptr[i] = 0;

	return (array);
}
