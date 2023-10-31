/**
 * word_count - Count the number of words in a string
 * @str: The input string
 *
 * Return: the number of words in the string.
 */
int word_count(char *str)
{
	int count = 0;
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}
	return (count);
}
