#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting from first char
 * @str: string pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int len;
	int z;
	char *y = str;
	int i;

	len = 0;
	z = 0;

	while (*y != '\0')
	{
		y++;
		len++;
	}

	z = len - 1;

	for (i = 0; i <= z; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}

	putchar('\n');
}
