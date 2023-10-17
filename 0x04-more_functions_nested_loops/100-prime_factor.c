#include <stdio.h>
#include <math.h>

/**
 * prime_factors - function declaration
 * Description: finds largest prime factor
 * @test: number to test
 * Return: void
 */

void prime_factors(long test);

/**
 * main - entry point
 * Description: calls prime_factors
 * Return: Returns 0
 */

int main(void)
{
	prime_factors(612852475143);
	return (0);
}

/**
 * prime_factors - function definition
 * Description: finds the largest prime factor
 * @test: number to test
 * Return: Doesn't return anything
 */

void prime_factors(long test)
{
	long divisor;

	divisor = 2;

	while (divisor != test)
	{
		if (test % divisor == 0)
		{
			test /= divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", test);
}
