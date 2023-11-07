#include <stdio.h>

void alphabet(char start);

/**
 * main - prints the letters of the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char start;

	printf("Enter any letter: ");
	scanf("%c", &start);

	alphabet(start);
}

void alphabet(char start)
{
	while (start <= 'z')
	{
		printf("%c\n", start);
		start++;
	}
}
