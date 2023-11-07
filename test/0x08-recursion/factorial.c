#include <stdio.h>

int factorial(int n);

/**
 * main - recursion
 *
 * Return: 0
 */
int main(void)
{
	int fact;

	printf("Enter the number to get factorial of: ");
	scanf("%d", &fact);

	/* 5! = 120 */
	printf("%d! = %d\n", fact, factorial(fact));

	return (0);
}

/**
 * factorial - recursive function for factorial numbers
 * @n: number to do factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{

	if (n == 0) /* base case */
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
