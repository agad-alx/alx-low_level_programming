#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int pn;

	pn = n;

	if (n < 0)
	{
		_putchar('-');
		pn = -n;
	}

	if (pn / 10 != 0)
	{
		print_number(pn / 10);
	}
	_putchar((pn % 10) + '0');
}
