/**
* print_sign - prints the sign of a number n
* @n: number to be checked
*
* Return: 1 if n is positive, 0 if n is zero or -1
* if n is less than 0
*/
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

