#include "main.h"

/**
 * _strpbrk - locates first occurence in string s
 * of any of the bytes in the string accept
 * @accept: string to locate
 * @s: string to search in
 * Return: pointer - found match
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (&s[i]);
	}

	return (NULL);
}
