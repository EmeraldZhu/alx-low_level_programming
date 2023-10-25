#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string whose length will be returned
 *
 * Return: string length as an integer
 */
int _strlen_recursion(char *s)
{
	int length;

	length = 0;

	if (*s)
	{
		length = _strlen_recursion(s + 1);
		return (length = length + 1);
	}

	return (0);
}
