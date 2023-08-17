#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int pn;

	if (n < 0)
	{
		pn = -n;
		_putchar('-');
	}
	else
	{
		pn = n;
	}

	if (pn / 10)
	{
		print_number(pn / 10);
	}

	_putchar((pn % 10) + '0');
}
