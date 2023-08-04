#include "main.h"
#include <stdio.h>

/**
* main - prints the number of arguments
* @argc: argument count
* @argv: argument values
* Return: Always (0)
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
