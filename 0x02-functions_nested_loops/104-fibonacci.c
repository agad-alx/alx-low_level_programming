#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 0, b = 1, c = 1, sum = 0;
	int i;

	for (i = 1; i <= 98; i++)
	{
		if (c % 2 == 0)
			sum += c;

		printf("%lu", c);

		if (i < 98)
			printf(",\t");

		c = a + b;
		a = b;
		b = c;
	}

	printf("\nSum of even-valued terms:\t%lu\n", sum);

	return (0);
}
