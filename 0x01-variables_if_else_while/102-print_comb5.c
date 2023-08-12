#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * separated by a space and a comma, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2; /* Declare variables for two two-digit numbers */

	/* Loop for the first two-digit number (00 to 98) */
	for (num1 = 0; num1 <= 98; num1++)
	{
		/* Loop for the second two-digit number (num1 + 1 to 99) */
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			/* Print the first two-digit number (formatted) */
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');

			/* Print a space between the two numbers */
			putchar(' ');

			/* Print the second two-digit number (formatted) */
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			/* Check if it's not the last combination */
			if (num1 < 98)
			{
				/* Print a comma */
				putchar(',');

				/* Print a space */
				putchar(' ');
			}
		}
	}

	/* Print a newline character */
	putchar('\n');
	return (0);
}
