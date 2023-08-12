#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits
 * separated by ", " and in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	/* Loop for the first digit (0 to 7) */
	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		/* Loop for the second digit (digit1 + 1 to 8) */
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			/* Loop for the third digit (digit2 + 1 to 9) */
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				/* Print the first digit */
				putchar('0' + digit1);

				/* Print the second digit */
				putchar('0' + digit2);

				/* Print the third digit */
				putchar('0' + digit3);

				/* Check if it's not the last iteration of outer loop */
				if (digit1 < 7)
				{
					/* Print a comma */
					putchar(',');

					/* Print a space */
					putchar(' ');
				}
			}
		}
	}

	/* Print a newline character */
	putchar('\n');
	return (0);
}
