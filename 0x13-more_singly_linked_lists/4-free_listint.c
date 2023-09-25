#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	/* Declare a pointer to a listint_t node for the current node */
	listint_t *current;

	/* Iterate through the list and free each node */
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
