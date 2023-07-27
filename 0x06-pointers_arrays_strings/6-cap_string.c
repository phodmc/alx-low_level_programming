#include "main.h"

/**
* cap_string - capitalize all words
* @s: string
* Return: string pointer
*/

char *cap_string(char *s)
{
	int i;

	for (i = 1; s[i] != '\0'; i++)
	{
		switch (s[i - 1])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - 32;
		}
	}

	return (s);
}
