#include "main.h"

/**
* _puts - prints the string str
* @str: string variable to print
* Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
