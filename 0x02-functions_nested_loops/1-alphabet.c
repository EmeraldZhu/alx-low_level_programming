#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Has no return value
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
