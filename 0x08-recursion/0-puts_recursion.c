#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: thr string to recurse
 * Description: it recurses through a string s
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
