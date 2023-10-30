#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: is the string to be searched
 * @accept: is the bytes to search for
 * Description: locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * Return: pointer to matched byte in accept
 * NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int str_index;
	int sub_str_index;

	for (str_index = 0; s[str_index] != '\0'; str_index++)
	{
		for (sub_str_index = 0; accept[sub_str_index] != '\0'; sub_str_index++)
		{
			if (s[str_index] == accept[sub_str_index])
			{
				return (s + str_index);
			}
		}
	}

	return (0);
}
