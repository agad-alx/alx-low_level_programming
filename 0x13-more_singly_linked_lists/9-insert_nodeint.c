#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added, starting at 0.
 * @n: Integer value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Initialize variables */
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *new_node;

	/* Create a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* Special case: insert at the beginning of the list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to the node before the desired index */
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	/* If index is out of bounds, free the new node and return NULL */
	if (i < idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node at the desired index */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
