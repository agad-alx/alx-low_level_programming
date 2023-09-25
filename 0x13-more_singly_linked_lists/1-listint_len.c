#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Description: This function counts and returns the number of elements in
 * a listint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;	/* Initialize node_count to 0 */

	/* Traverse the list and count each element */
	while (h != NULL)
	{
		/* Move to the next node */
		h = h->next;

		/* Increment the node count */
		node_count++;
	}

	/* Return the total number of elements */
	return (node_count);
}
