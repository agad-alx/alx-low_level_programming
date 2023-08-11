#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints single-digit numbers of base 10 starting from 0
 * followed by newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num); /* Print character equivalent to '0' + num */
	}

	putchar('\n'); /* Print a newline character */
	return (0);
}
