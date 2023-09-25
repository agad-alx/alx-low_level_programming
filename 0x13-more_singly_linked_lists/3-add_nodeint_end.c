#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Create a new node */
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, set the new node as the head */
		*head = new_node;
	}
	else
	{
		temp = *head;
		/* Traverse to the end of the list */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* Add the new node at the end */
		temp->next = new_node;
	}

	return (new_node);
}
