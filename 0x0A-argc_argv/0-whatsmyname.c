#include "main.h"
#include <stdio.h>

/**
* main - prints programs name
* @argc: argument count
* @argv: argument values
* Return: Always (0)
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
