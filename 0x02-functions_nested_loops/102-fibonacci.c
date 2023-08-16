#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	long long fib1 = 1, fib2 = 2, next_fib;
	int count;

	printf("%lld, %lld", fib1, fib2);

	for (count = 3; count <= 50; count++)
	{
		next_fib = fib1 + fib2;
		printf(", %lld", next_fib);

		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");

	return (0);
}
