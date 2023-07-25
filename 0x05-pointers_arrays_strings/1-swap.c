#include "main.h"

/**
* swap_int - swap out the pointer variable a with pointer b
* @a: pointer variable
* @b: pointer variable
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
