#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Returns 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}

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
