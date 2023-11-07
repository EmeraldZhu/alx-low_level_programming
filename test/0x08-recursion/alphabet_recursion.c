#include <stdio.h>

void alphabet(char start);

/**
 * main - recursion
 * 
 * Return: 0
 */
int main(void)
{
	char start;

	printf("Enter letter: ");
	scanf("%c", &start);
	alphabet(start);

	return (0);
}

/**
 * alphabet - prints letters of the alphabet
 * @start: letter to start from
 * 
 * Return: void
 */
void alphabet(char end)
{
	// char result;

	if (end == 'a') /* base case */
	{
		printf("%c\n", end);
	}
	else
	{
		printf("%c\n", end);
		alphabet(end - 1);
		// result = alphabet(end - 1);
	}
}
