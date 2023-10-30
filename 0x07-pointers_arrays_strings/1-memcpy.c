#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: this is the destination address
 * @src: this is the source address
 * @n: the number of times to copy
 *
 * Description: copies n bytes from memory area src to memory area dest
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
