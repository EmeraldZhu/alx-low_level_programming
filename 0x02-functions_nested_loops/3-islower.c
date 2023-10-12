#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: Retunrs 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

