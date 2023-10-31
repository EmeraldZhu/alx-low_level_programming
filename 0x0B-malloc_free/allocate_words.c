#include <stdlib.h>
#include <stddef.h>
#include "main.h"

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
