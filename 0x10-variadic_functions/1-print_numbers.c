#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string printed between numbers
 * @n: length of integer arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (!separator)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
			printf("%d\n", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}

	va_end(args);
}
