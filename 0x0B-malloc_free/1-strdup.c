#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: a string pointer
 *
 * Return: a pointer to the duplicated string
 * NULL if str = NULL
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
