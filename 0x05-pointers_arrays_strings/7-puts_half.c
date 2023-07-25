#include "main.h"

/**
* puts_half - prints the string str
* @str: string variable to print
* Return: void
*/

void puts_half(char *str)
{
	int size, half;

	size = _strlen(str);
	if (size % 2 == 0)
	{
		half = size / 2;
	}
	else
	{
		half = (size - 1) / 2;
	}

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}

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

