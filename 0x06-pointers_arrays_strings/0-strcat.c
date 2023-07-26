#include "main.h"

/**
* _strcat - concatenates string src to dest
* @dest: destination string
* @src: source string
* Return: char pointer variable
*/

char *_strcat(char *dest, char *src)
{
	int dest_end;
	int src_start;

	dest_end = 0;
	while (dest[dest_end] != '\0')
	{
		dest_end++;
	}

	for (src_start = 0; src[src_start] != '\0'; src_start++)
	{
		dest[dest_end] = src[srr_start];
		dest_end++;
	}

	dest[dest_end] = '\0';

	return (dest);
}
