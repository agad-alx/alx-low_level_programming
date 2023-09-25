#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t size = 0;

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h)
			break;
	}

	*h = NULL;

	return (size);
}
