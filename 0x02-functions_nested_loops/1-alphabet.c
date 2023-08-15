#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Return: Always void (no return)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
