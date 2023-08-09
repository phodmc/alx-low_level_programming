#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to newly created string
*/

char *str_concat(char *s1, char *s2)
{
	char *new;
	char empty[] = "";
	int i, j, len1, len2;

	if (!s1)
		s1 = empty;

	if (!s2)
		s2 = empty;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	new = malloc(len2 + len1 + 1);

	if (!new)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
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
