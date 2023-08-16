#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char l = 'a';
	int r = 0;

	while (r < 10)
	{
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		/* Reset l for the next iteration */
		l = 'a';
		r++;
	}
}
