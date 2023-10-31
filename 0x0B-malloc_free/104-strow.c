#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
			count++;
	}
	return (count);
}

/**
 * allocate_words - Allocate memory for words array
 * @count: Number of words
 *
 * Return: Pointer to the allocated array.
 */
char **allocate_words(int count)
{
	char **words = malloc((count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	return (words);
}

/**
 * copy_word - Copy a word from start to end
 * @start: Start of the word
 * @end: End of the word
 *
 * Return: pointer to the copied word.
 */
char *copy_word(char *start, char *end)
{
	char *word = malloc(end - start + 1);

	if (word == NULL)
		return (NULL);

	strncpy(word, start, end - start);
	word[end - start] = '\0';
	return (word);
}

/**
 * free_words - Free the memory allocated for words array
 * @words: The words array to free
 *
 * Return: void
 */
void free_words(char **words)
{
	if (words == NULL)
		return;

	for (int i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}

	free(words);
}

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

/**
 * allocate_and_copy_words - Allocates memory for a word
 * copies it from the start and end positions
 * and adds it to an array of words at specified index
 * @words: The words array
 * @start: Start of the word
 * @end: End of the word
 * @index: Index in the words array
 *
 * Return: pointer to the modified words array.
 */
char **allocate_and_copy_words(char **words, char *start, char *end, int index)
{
	words[index] = copy_word(start, end);

	if (words[index] == NULL)
	{
		free_words(words);
		return (NULL);
	}
	return (words);
}

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
