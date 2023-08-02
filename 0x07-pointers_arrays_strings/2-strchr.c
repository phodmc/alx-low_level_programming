#include "main.h"

/**
* _strchr - locates char c in a string s
* @s: string to locate char
* @c: char to locate in string
* Return: pointer to first occurence of c
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	if (s[i] == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
