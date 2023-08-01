#include "main.h"

/**
* _strchr - locates char c in a string s
* @s: string to locate char
* @c: char to locate in string
* Return: pointer to first occurence of c
*/

char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return ((char *) s);

		s++;
	}

	return (NULL);
}
