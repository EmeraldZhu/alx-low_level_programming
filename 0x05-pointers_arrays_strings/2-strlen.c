#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string pointer
 *
 * Return: returns length of string as int
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s++)
	{
		i++;
	}

	return (i);
}
