#include "main.h"
/**
 * rev_string - reverses a string s
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int size = _strlen(s);
	int start, end

	start = 0;
	end = size - 1;

	while (start < end)
	{
		char temp = str[start];

		str[left] = str[right];
		str[right] = temp;

		start++;
		end--;
	}
}

/**
* _strlen - returns length of string s
* @s: char pointer variable
*
* Return: int - lenght of string s
*/

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
