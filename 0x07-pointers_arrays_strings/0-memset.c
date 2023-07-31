#include "main.h"

/**
* _memset - fills out the first n bytes of mem area pointed by
* s with the constant byte b
* @n: number of bytes to fill
* @s: memory area pointer
* @b: byte to fill in memory area
* Return: pointer (s)
*/

char _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
