#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to get starting from 0.
 *
 * Return: The value of the bit at the specified index
 * or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		/* Index out of range */
		return (-1);

	return ((n >> index) & 1);
}
