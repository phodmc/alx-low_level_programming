#include "main.h"

/**
* _strncat - concatenates n number of elements
* from string src to dest
* @n: number of elements to concatenate
* @dest: destination string
* @src: source string
* Return: char pointer variable
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_end;
	int src_start;

	dest_end = 0;
	while (dest[dest_end] != '\0')
	{
		dest_end++;
	}

	for (src_start = 0; src_start < n; src_start++)
	{
		dest[dest_end] = src[src_start];
		dest_end++;
	}

	if (src_start < n)
		dest[dest_end] = '\0';

	return (dest);
}
