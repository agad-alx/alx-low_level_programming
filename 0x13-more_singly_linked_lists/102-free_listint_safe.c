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
	listint_t *current, *temp;
	size_t size = 0;

	/* Check if h is NULL or *h is NULL (empty list) */
	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	/* Initialize a loop to go through the list */
	while (current != NULL)
	{
		size++;  /* Increment the size counter */
		temp = current;  /* Store the current node */
		current = current->next;  /* Move to the next node */
		free(temp);  /* Free the stored node */

		/* Check if we've reached the end of the original list */
		if (current == *h)
			break;
	}

	/* Set the head to NULL to indicate the list has been freed */
	*h = NULL;

	return (size);
}
