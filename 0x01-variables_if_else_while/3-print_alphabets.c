#include <stdio.h>

/**
 * main - Entry point of program
 * Return: Returns 0
 */
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}

	putchar(10);

	return (0);
}
