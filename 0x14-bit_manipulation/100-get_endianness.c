#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian
 * 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int check_endian = 1;
	char *byte_ptr = (char *)&check_endian;

	/* If the least significant byte (LSB) is 1, it's little endian */
	if (*byte_ptr == 1)
	{
		/* Little endian */
		return (1);
	}
	else
	{
		/* Big endian */
		return (0);
	}
}
