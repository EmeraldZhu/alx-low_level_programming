#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * word_count - splits a string into words
 * @str: character pointer
 *
 * Return: count
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

/**
 * allocate_words - allocates words
 * @count: int variable
 *
 * Return: words
 * NULL if words == NULL
 */
char **allocate_words(int count)
{
	char **words = malloc((count + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}
	return (words);
}

/**
 * allocate_word - allocates word
 * @start: character pointer
 * @end: character pointer
 *
 * Return: word
 * NULL if word == NULL
 */
char *allocate_word(char *start, char *end)
{
	char *word = malloc((end - start + 1) * sizeof(char));

	if (word == NULL)
	{
		return (NULL);
	}
	strncpy(word, start, end - start);
	word[end - start] = '\0';

	return (word);
}

/**
 * free_words - frees words
 * @words: character pointer to a pointer
 * @index: int variable
 *
 * Return: void
 */
void free_words(char **words, int index)
{
	int j;

	for (j = 0; j < index; j++)
	{
		free(words[j]);
	}
	free(words);
}

/**
 * strtow - splits a string into words
 * @str: character pointer
 *
 * Return: words
 */
char **strtow(char *str)
{
	int count;
	char **words;
	int index;
	char *start;
	char *end;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}

	count = word_count(str);

	if (count == 0) /* if no words in string */
	{
		return (NULL);
	}

	words = allocate_words(count);

	if (words == NULL)
	{
		return (NULL);
	}

	index = 0;
	start = str;
	end = str;

	while (*end != '\0')
	{
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		if (start != end)
		{
			words[index] = allocate_word(start, end);
			if (words[index] == NULL)
			{
				free_words(words, index);
				return (NULL);
			}
			index++;
		}
		while (*end == ' ')
		{
			end++;
		}
		start = end;
	}
	words[index] = NULL;

	return (words);
}
