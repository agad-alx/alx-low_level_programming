#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - this allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int m)
{
	void *ptr;

	ptr = malloc(m);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
