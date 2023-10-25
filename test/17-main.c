#include <stdio.h>

void f(int *i);

/**
 * main - illustrates array type decay
 *
 * Return: returns 0
 */
int main(void)
{
	int *a;
	int b[10];

	a = b;

	f(b);

	printf("Address of a: %p\n", a);
	printf("Address of b: %p\n", b);
	printf("Address of &b[0]: %p\n", &b[0]);
}

/**
 * f - takes a pointer argument
 * @i: address of int we need to print
 * Description: prints address of argument
 *
 * Return: nothing
 */
void f(int *i)
{
	printf("Address of i: %p\n", i);
}
