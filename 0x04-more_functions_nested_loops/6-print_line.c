#include "main.h"

/**
 * print_line - darws a straight line
 * @n: parameter for number of times _ to print
 *
 * Return: Doesn't return anything
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
