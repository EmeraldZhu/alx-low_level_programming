#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: The character to be checked
 *
 * Return: Retunrs 1 if lowercase, 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

