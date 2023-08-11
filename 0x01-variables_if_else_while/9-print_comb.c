#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible combinations of single-digit numbers,
 * separated by ", " and in ascending order.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num); /* Print the current digit */

		if (num < 9)
		{
			putchar(','); /* Print comma */
			putchar(' '); /* Print space */
		}
	}

	putchar('\n'); /* Print a newline character */
	return (0);
}
