#include <unistd.h>
#include "main.h"

/**
 * _putchar - Custom function to print a character
 * @c: The character to be printed
 *
 * Return: On success 1.
 * On error, -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
