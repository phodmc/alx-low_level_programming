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
	int size;

	size = _strlen(src);
	dest_end = 0;
	src_start = 0;

	while (dest[dest_end] != '\0')
	{
		dest_end++;
	}

	for (; src_start < n; src_start++)
	{
		dest[dest_end] = src[src_start];
		dest_end++;

		if (src_start + 1 == size)
		{
			dest[dest_end] = '\0';
			break;
		}
	}

	return (dest);
}

/**
 * _strlen - return the length of string s
 * @s: string
 *
 * Return: int, length of string s
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}

	return (counter + 1);
}
