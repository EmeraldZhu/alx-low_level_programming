#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: Doesn't return anything
 */
void print_triangle(int size)
{
	int i; /* range */
	int j; /* space */
	int k; /* hash */

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
