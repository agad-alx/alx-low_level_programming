#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		/* Store the next node */
		next = (*head)->next;

		/* Reverse the current node's next pointer */
		(*head)->next = prev;

		/* Move pointers one step ahead */
		prev = *head;
		*head = next;
	}

	/* Update the head to point to the new first node */
	*head = prev;

	return (*head);
}
