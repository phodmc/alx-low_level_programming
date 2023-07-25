#include "main.h"

/**
* _strlen - returns length of string s
* @s: char pointer variable
*
* Return: int - lenght of string s
*/

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
