#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: double pointer
 *
 * Return: pointer to a new string
 * NULL if ac == 0 or av == NULL
 * NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	s = malloc(sizeof(char) * l + 1);
	k = 0;
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}
	return (s);
}
