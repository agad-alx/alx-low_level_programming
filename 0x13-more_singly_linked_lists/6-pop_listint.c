#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns the head node's data (n).
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	/* Check if the list is empty */
	if (*head == NULL)
		return (0);

	/* Store the data of the head node */
	data = (*head)->n;

	/* Move the head to the next node */
	temp = *head;
	*head = (*head)->next;

	/* Free the previous head node */
	free(temp);

	return (data);
}
