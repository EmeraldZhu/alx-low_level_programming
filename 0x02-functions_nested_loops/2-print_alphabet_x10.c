#include "main.h"

/**
 * print_alphabet - prints the alphabet 10 times in lowercase
 *
 * Return: Has no return value
 */
void print_alphabet_x10(void)
{
	char alphabet;

	int i;
	i = 0;

	while (i < 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');
		i++;
	}

}
