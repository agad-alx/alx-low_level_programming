#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int count, fib1, fib2, fib3;

	fib1 = 1;
	fib2 = 2;

	printf("%d, %d, ", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		fib3 = fib1 + fib2;
		printf("%d", fib3);

		if (count != 98)
			printf(", ");

		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");
	return (0);
}
