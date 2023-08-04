#include "main.h"
#include <stdio.h>

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument values
* Return: 1 if argc not equal to 3 or 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", argv[1] * argv[2]);
	return (0);
}

