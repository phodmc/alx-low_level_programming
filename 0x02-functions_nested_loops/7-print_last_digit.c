#include "main.h"

/**
* print_last_digit - prints last digit of an number n
* @n: The number to get the last digit from
*
* Return: last digit of n
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs(n) % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}

/**
* _abs - calculate absolute value of an integer n
* @n: integer value to compute
*
* Return: absolute value of integer n
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
