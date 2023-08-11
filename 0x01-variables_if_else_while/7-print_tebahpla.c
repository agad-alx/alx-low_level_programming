#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints lowercase alphabet in reverse
 * followed by newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse); /* Print the current letter */
	}
	putchar('\n'); /* Print a newline character */
	return (0);
}
