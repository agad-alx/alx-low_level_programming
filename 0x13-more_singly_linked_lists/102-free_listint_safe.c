#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t count = 0;

	while (current != NULL)
	{
		next = current->next;
		printf("[%p] %d\n", (void *)current, current->n);
		free(current);
		count++;

		/* Check if the next node points back to a previous node */
		if (next >= current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}

		current = next;
	}

	*h = NULL;

	return (count);
}
