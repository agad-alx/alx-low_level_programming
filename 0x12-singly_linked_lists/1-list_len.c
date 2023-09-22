#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @q: pointer to the list_t list
 *
 * Return: number of elements in q
 */
size_t list_len(const list_t *q)
{
	size_t n = 0;

	while (q)
	{
		n++;
		q = q->next;
	}
	return (n);
}
