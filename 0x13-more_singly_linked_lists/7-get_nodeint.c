#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Initialize variables */
	unsigned int i = 0;
	listint_t *current = head;

	/* Traverse the list until reaching the desired index */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* If the index is valid, current now points to the nth node */
	if (i == index)
		return (current);

	/* If index is out of bounds or the list is empty, return NULL */
	return (NULL);
}
