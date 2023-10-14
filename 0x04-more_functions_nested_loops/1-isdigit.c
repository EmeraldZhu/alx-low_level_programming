#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 - 9)
 * @c: number to be checked
 *
 * Return: Returns 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
