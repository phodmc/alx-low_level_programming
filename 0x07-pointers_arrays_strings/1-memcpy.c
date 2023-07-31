#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to
* memory areac dest
* @dest: memory area to copy bytes to
* @src: memory area to copy bytes from
* @n: number of bytes to copy
* Return: pointer (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
