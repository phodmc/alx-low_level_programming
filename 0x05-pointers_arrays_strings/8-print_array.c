#include "main.h"
#include <stdio.h>

/**
* print_array - prints elements of an array a
* @a: array of ints
* @n: number of elements to print
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if  (n != i + 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
