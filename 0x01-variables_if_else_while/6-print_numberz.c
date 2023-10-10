#include <stdio.h>

/**
 * main - Entry point of program
 * Return: Returns 0
 */
int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit <= 9; single_digit++)
	{
		putchar(single_digit + '0');
	}

	putchar(10);

	return (0);
}
