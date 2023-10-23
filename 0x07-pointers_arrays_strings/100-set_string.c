#include "main.h"

/**
 * set_string - function declaration
 * @s: is the pointer
 * @to: the char to be displayed
 *
 * Return: Doesn't return anything
 */
void set_string(char **s, char *to);

/**
 * set_string - is function definition
 * @s: is the pointer to use
 * @to: is the string value
 *
 * Description: this programe sets s value of a pointer to a char
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
