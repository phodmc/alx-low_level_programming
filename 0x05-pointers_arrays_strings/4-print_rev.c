#include "main.h"
/**
 * print_rev - prints string s in reverse
 * @s: string variable
 * Return: void
 */

void print_rev(char *s)
{
	int str_len;

	str_len = _strlen(s);
	for (; str_len >= 0; str_len--)
	{
		_putchar(*(s + str_len));
	}

	_putchar('\n');
}
