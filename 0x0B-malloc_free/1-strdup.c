#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates string and return a pointer to duplicated pointer
* @str: string to duplicate
* Return: pointer to duplicated string
*/

char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (!str)
		return (NULL);

	len = _strlen(str);
	dup = malloc(len + 1);
	i = 0;

	if (!dup)
		return (NULL);

	for (; str[i] != '\0'; i++)
		dup[i] = str[i];

	dup[i] = '\0';
	return (dup);
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
