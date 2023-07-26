#include "main.h"

/**
* puts2 - prints the string str
* @str: string variable to print
* Return: void
*/

void puts2(char *str)
{
	_putchar(str[0]);

	while (*str != '\0')
	{
		str++;
		str++;
		_putchar(*str);
	}

	_putchar('\n');
}
