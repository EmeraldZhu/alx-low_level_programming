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
}

/**
 * alphabet - prints letters of the alphabet
 * @start: letter to start printing from
 * 
 * Return: void
 */
void alphabet(char start)
{
	if (start == 'z') /* base case */
	{
		printf("%c\n", start);
	}
	else
	{
		printf("%c\n", start);
		alphabet(start + 1);
	}
}
