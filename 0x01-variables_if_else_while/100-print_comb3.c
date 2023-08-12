#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible different combinations of two digits,
 * separated by ", " and in ascending order.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			putchar('0' + digit1); /* Print the first digit */
			putchar('0' + digit2); /* Print the second digit */

			if (digit1 < 8)
			{
				putchar(','); /* Print comma */
				putchar(' '); /* Print space */
			}
		}
	}

	putchar('\n'); /* Print a newline character */
	return (0);
}
