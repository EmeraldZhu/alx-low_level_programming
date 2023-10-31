/**
 * skip_spaces - Skip leading spaces in a string
 * @str: The string to process
 *
 * Return: a pointer to the first non-space character.
 */
char *skip_spaces(char *str)
{
	while (*str == ' ')
	{
		str++;
	}
	return (str);
}
