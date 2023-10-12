#include <unistd.h>

/**
 * main - Entry point
 * Return: returns 0
 */
int main(void)
{
	char message[] = "_putchar\n";
	write(STDOUT_FILENO, message, sizeof(message) - 1);

	return (0);
}
