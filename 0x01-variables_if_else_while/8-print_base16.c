#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints numbers of base 16 (hexadecimal) in lowercase
 * followed by newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num); /* Print digits 0-9 */
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num); /* Print lowercase letters a-f */
	}

	putchar('\n'); /* Print a newline character */
	return (0);
}
