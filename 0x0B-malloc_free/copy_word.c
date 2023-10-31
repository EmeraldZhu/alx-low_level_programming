#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

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
