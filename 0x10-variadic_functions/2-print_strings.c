#include "variadic_functions.h"

/**
 * print_strings - prints all string arguments
 * @separator: strings separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		string = va_arg(args, char *);

		if (!string)
		{
			if (!separator)
				printf("(nil)");
			else
				printf("(nil)%s", separator);
		}
		else
		{
			if (!separator)
				printf("%s", string);
			else
				printf("%s%s", string, separator);

		}
	}

	string = va_arg(args, char *);

	if (!string)
		printf("(nil)\n");
	else
		printf("%s\n", string);
}
