#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * free_words - Free the memory allocated for words array
 * @words: The words array to free
 *
 * Return: void
 */
void free_words(char **words)
{
	int i;

	if (words == NULL)
		return;

	for (i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}

	free(words);
}
