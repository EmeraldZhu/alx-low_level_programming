#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of characters to concatenate from s2 to s1
 *
 * Return: result, which is 2 concatentaed strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int s2_len = (s2 != NULL) ? strlen(s2) : 0;
	char *result;
	unsigned int i, j;

	if (n >= s2_len)
		n = s2_len;

	result = malloc(s1_len + n + 1);  /* +1 for the null terminator */

	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		result[i] = s2[j];

	result[i] = '\0';

	return (result);
}

