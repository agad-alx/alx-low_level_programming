#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Description: This function prints all the elements of a listint_t list,
 *              one element per line.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	/* Initialize node_count to 0 */
	size_t node_count = 0;

	/* Traverse the list and print each element */
	while (h != NULL)
	{
		/* Print the current node's value */
		printf("%d\n", h->n);

		/* Move to the next node */
		h = h->next;

		/* Increment the node count */
		node_count++;
	}

	/* Return the total number of nodes printed */
	return (node_count);
}
