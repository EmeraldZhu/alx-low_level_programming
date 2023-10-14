#include "main.h"

/**
 * print_most_numbers - prints numbers (0 - 9)
 *
 * Return: Doesn't return a value
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
		_putchar(n + '0');
		}
	}

	_putchar('\n');
}
