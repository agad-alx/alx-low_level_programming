#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	/* Initialize two pointers, tortoise and hare, both starting at the head. */
	listint_t *tortoise = head;
	listint_t *hare = head;

	/* Use Floyd's Tortoise and Hare algorithm to detect a loop. */
	while (tortoise && hare && hare->next)
	{
		/* Move tortoise one step at a time. */
		tortoise = tortoise->next;
		/* Move hare two steps at a time. */
		hare = hare->next->next;

		/* If there is a loop, they will eventually meet. */
		if (tortoise == hare)
		{
			/* Reset the tortoise to the head and find the starting node of the loop. */
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			/* Loop detected, return the starting node of the loop. */
			return (tortoise);
		}
	}

	/* No loop found, return NULL. */
	return (NULL);
}
