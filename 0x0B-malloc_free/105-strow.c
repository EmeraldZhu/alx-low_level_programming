#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: an array of words.
 */
char **strtow(char *str)
{
	int count;
	char **words;
	int index;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);

	count = word_count(str);

	if (count == 0)
		return (NULL);

	words = allocate_words(count);

	if (words == NULL)
		return (NULL);

	index = 0;

	while (*str != '\0')
	{
		char *end = find_word_end(str);

		if (str != end)
		{
			words = allocate_and_copy_words(words, str, end, index);
			if (words == NULL)
				return (NULL);

			index++;
		}

		str = skip_spaces(end);
	}

	words[index] = NULL;

	return (words);
}
