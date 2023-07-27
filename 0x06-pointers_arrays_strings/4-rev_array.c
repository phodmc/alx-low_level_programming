#include "main.h"

/**
* reverse_array - reverse content of array a
* @a: pointer
* @n: size of array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		int temp;

		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
