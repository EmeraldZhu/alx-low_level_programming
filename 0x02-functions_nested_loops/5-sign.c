#include <stdio.h>

/**
 * printf_sign - prints the sign of a number
 *
 * @n - the number to be checked
 * Return: Returns 1 if positive, 0 if 0, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}

	return (0);
}
