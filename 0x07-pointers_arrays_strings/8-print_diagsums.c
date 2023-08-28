#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, d;

	sum1 = 0;
	sum2 = 0;

	for (d = 0; d < size; d++)
	{
		sum1 = sum1 + a[d * size + d];
	}

	for (d = size - 1; d >= 0; d--)
	{
		sum2 += a[d * size + (size - d - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
