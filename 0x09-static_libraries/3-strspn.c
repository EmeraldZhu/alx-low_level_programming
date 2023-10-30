#include "main.h"

/**
 * _strspn -is the function definition
 * @s: is the string to search
 * @accept: is the prefix substring to be tested
 * Description: returns number of bytes in which s only has bytes from accept
 *
 * Return: is the  number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	int index;

	bytes = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (bytes);
			}
		}

		s++;
	}

	return (bytes);
}
