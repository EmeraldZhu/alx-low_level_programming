#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: character pointer
 *
 * Return: words
 */
char **strtow(char *str)
{
	int count = 0;
	int i;
	char **words;
	int index;
	char *start;
	char *end;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}

	if (count == 0) /* if no words in string */
	{
		return (NULL);
	}

	words = malloc((count + 1) * sizeof(char *));

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
			words[index] = malloc((end - start + 1) * sizeof(char));
			if (words[index] == NULL)
			{
				int j;

				for (j = 0; j < index; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[index], start, end - start);
			words[index][end - start] = '\0';
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
