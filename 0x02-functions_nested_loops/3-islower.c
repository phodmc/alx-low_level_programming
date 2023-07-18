#include "main.h"

/**
* _islower - checks if int c is lower case
* @c: character to be checked
*
* Return: 1 if c is lower, otherwise returns 0
*/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
