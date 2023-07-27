#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: positive if s1 > s2, negative if s1 < s2 or
* 0 if both are equal
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return ((s1[i] + 0) - (s2[i] + 0));

		i++;
	}

	return (0);
}
