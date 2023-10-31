/**
 * find_word_end - Find the end of a word
 * @str: The string to search
 *
 * Return: a pointer to the end of the word.
 */
char *find_word_end(char *str)
{
	while (*str != ' ' && *str != '\0')
	{
		str++;
	}
	return (str);
}
