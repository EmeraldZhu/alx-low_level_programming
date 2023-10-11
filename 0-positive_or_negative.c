#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of program
 * Return: Returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (0);
}
