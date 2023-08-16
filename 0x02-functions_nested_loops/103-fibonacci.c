#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next_fib, sum = 2;

	while (1)
	{
		next_fib = fib1 + fib2;

		if (next_fib > 4000000)
			break;

		if (next_fib % 2 == 0)
			sum += next_fib;

		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("%lu\n", sum);

	return (0);
}
