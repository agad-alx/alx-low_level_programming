#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted, starting at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Initialize variables */
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *temp;

	/* Handle the case where the list is empty */
	if (*head == NULL)
		return (-1);

	/* Special case: delete the node at the beginning of the list */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Traverse the list to the node before the desired index */
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	/* If index is out of bounds, return -1 (failed) */
	if (i < index - 1 || current == NULL || current->next == NULL)
		return (-1);

	/* Delete the node at the desired index */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
