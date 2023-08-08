#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates string and return a pointer to duplicated pointer
* @str: string to duplicate
* Return: pointer to duplicated string
*/

char *_strdup(char *str)
{
	char *dup = malloc(*str + 1);
	int i = 0;

	if (!str || !dup)
		return (NULL);

	for (; str[i] != '\0'; i++)
		dup[i] = str[i];

	dup[i] = '\0';
	return (dup);
}
