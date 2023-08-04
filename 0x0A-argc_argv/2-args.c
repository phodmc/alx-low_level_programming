#include "main.h"
#include <stdio.h>

/**
* main - prints all received arguments
* @argc: argument count
* @argv: argument values
* Return: Always (0)
*/

int main(int argc, char **argv)
{
	for (; argc > 0; argc--)
		printf("%s\n", *argv++);

	return (0);
}
