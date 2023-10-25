#include "main.h"

/**
 * divisible - function definition
 * @my_num: the number to test
 * @divisor: the divisor to use
 * Description: checks the divisibility of a number
 *
 * Return: 0 for divisible, 1 for not
 */
int divisible(int my_num, int divisor)
{
	if (my_num % divisor == 0)
	{
		return (0);
	}
	else if (divisor == my_num / 2)
	{
		return (1);
	}
	else
	{
		return (divisible(my_num, divisor + 1));
	}
}

/**
 * is_prime_number - returns 1 if number is prime, else 0
 * @n: the number to be tested
 * Description: find a prime number
 *
 * Return: 1 for prime, else 0
 */
int is_prime_number(int n)
{
	int divisor;

	divisor = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}
	else
	{
		return (divisible(n, divisor));
	}
}
