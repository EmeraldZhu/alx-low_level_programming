#include <stdio.h>

int countdown(int n);

/**
 * main - recursion
 *
 * Return: 0
 */
int main(void)
{
	int count;

	printf("Count down from: ");
	scanf("%d", &count);
	countdown(count);

	return (0);
}

/**
 * countdown - recursive function that counts down till n == 0
 * @n: integer to begin counting down from
 *
 * Return: countdown
 */
int countdown(int n)
{
	if (n == 0) /* base case */
	{
		return (0);
	}
	else
	{
		printf("%d\n", n);
		countdown(n - 1);
	}
}
