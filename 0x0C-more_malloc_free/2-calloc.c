#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements to allocate memory for in array
 * @size: size, in bytes, of each element in array
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	memset(ptr, 0, total_size);

	return (ptr);
}
