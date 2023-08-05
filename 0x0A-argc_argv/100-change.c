#include <stdio.h>
#include <stdlib.h>

/**
* main - print min number of coins to make change
* @argc: argument count
* @argv: argument values
* Return: 0 or 1;
*/

int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coins = 0;

	while (cents > 0)
		if (cents >= 25)
		{
			coins += cents / 25;
			cents = cents % 25;
		}
		else if (cents >= 10)
		{
			coins += cents / 10;
			cents = cents % 10;
		}
		else if (cents >= 5)
		{
			coins += cents / 5;
			cents = cents % 5;
		}
		else if (cents >= 2)
		{
			coins += cents / 2;
			cents = cents % 2;
		}
		else
		{
			coins++;
			cents = 0;
		}
	printf("%d\n", coins);
	return (0);
}
