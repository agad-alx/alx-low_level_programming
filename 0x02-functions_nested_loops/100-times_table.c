#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The value for which the times table is to be printed
 */
void print_times_table(int n)
{
	int r, c, p;

	if (n < 0 || n > 15)
		return;

	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			p = r * c;
			if (c == 0)
			{
				printf("%d", p);
			}
			else
			{
				printf(", %3d", p);
			}
		}
		printf("\n");
	}
}
