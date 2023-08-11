#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes from s2 to concatenate
* Return: pointer to newly created string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	char empty[] = "";
	unsigned int i, j, len1, len2;

	if (!s1)
		s1 = empty;

	if (!s2)
		s2 = empty;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n < len2)
		new = malloc(len1 + n + 1);
	else
		new = malloc(len1 + len2 + 1);

	if (!new)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];

	if (n >= len2)
		for (j = 0; s2[j] != '\0'; j++)
		{
			new[i] = s2[j];
			i++;
		}
	else
		for (j = 0; j < n; j++)
		{
			new[i] = s2[j];
			i++;
		}

	new[i] = '\0';
	return (new);
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

	return (counter);
}
