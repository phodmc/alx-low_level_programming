#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: bytes to allocate
* Return: void pointer
*/

void *malloc_checked(unsigned int b)
{
	void *memo;

	memo = malloc(b);
	if (!memo)
		exit(98);

	return (memo);
}
