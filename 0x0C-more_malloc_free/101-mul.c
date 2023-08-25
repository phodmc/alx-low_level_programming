#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument values
* Return: 1 if argc not equal to 3 or 0 (Success)
*/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (!num1 || !num2)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", num1 * num2);
	return (0);
}
