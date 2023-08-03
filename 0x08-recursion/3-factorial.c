#include "main.h"

/**
* factorial - return factorial of a given number n
* @n: number to find factorial of
* Return: int - factorial of n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
