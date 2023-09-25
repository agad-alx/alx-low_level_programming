#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	/* Declare a pointer to a listint_t node for the current node */
	listint_t *current;

	/* Iterate through the list and free each node */
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	/* Set the head to NULL to indicate an empty list */
	*head = NULL;
}
