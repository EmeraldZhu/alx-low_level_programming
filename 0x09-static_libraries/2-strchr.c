#include "main.h"

/**
 * *_strchr - function Definition
 * @s: Is the string to be searched
 * @c: Is the character to find
 *
 * Description: This program finds a character in a string
 * Return: a string as it is a char data type of function
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}

	if (s[index] == c)
	{
		return (s + index);
	}

	return (0);
}
