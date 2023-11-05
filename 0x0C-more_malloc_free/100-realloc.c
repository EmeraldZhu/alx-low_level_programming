#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory block to reallocate
 * @old_size: size, in bytes, of original memory block pointed by ptr
 * @new_size: new size, in bytes, to which to reallocate memory block
 *
 * Return: pointer to newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = malloc(new_size);
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		if (new_size == 0)
			return (NULL);

		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (new_ptr);
}
