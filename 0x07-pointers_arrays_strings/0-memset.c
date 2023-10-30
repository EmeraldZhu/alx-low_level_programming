#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: Is the pointer to a constant
 * @b: Is the constant to be used
 * @n: Is the maximum number of bytes
 *
 * Return: returns pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}

	return (s);
}
