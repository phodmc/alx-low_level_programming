#include "main.h"

/**
* cap_string - capitalize all words
* @s: string
* Return: string pointer
*/

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] >= 'a' && s[i] <= 'z')
		{

			if (i == 0)
			{
				s[i] = s[i] - 32;
				continue;
			}

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
					s[i] = s[i] - 32;
					break;
				default:
					break;
			}
		}
	}

	return (s);
}
