#include <stddef.h>
#include "main.h"

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
