#include <stdio.h>
#include "main.h"


/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: char pointer
 *
 * Return:(void)
 */

void puts_half(char *str)
{
	int r;
	int d;

	r = 0;

	while (str[r] != '\0')
	{
		r++;
	}

	if (r % 2 == 1)
	{
		d = (r - 1) / 2;
		d += 1;

	}
	else
	{
		d = r / 2;
	}

	for (; d < r; d++)
	{
		putchar(str[d]);
	}

	putchar('\n');
}
