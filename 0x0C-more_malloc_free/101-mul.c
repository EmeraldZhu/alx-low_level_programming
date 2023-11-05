#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isPositiveInteger - checks if a string has only digits
 * @str: input string to be checked
 *
 * Return: 1 if string is a positive integer, 0 otherwise
 */
int isPositiveInteger(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0); /* Not a positive integer */
		str++;
	}
	return (1); /* Positive integer */
}

/**
 * multiply - multiplies 2 positive integers
 * @num1: first positive integer
 * @num2: second positive integer
 *
 * Return: result of multiplication
 */
unsigned long multiply(unsigned long num1, unsigned long num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unsigned long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!isPositiveInteger(argv[1]) || !isPositiveInteger(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtoull(argv[1], NULL, 10);
	num2 = strtoull(argv[2], NULL, 10);

	result = multiply(num1, num2);

	printf("%lu\n", result);

	return (0);
}
