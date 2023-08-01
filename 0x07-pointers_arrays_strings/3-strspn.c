#include "main.h"

/**
* _strspn - get length of prefix substring
* @s: string to scan
* @accept: bytes to search
* Return: length of segment containing found bytes (unsigned int)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int is_match;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				is_match = 1;
				length++;
			}
		}

		if (!is_match)
			return (length);

		is_match = 0;
	}

	return (length);
}
