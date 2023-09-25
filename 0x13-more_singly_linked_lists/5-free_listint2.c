#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Description:
 * This function frees all the nodes of a listint_t linked list and sets the
 * head pointer to NULL.
 *
 * Parameters:
 * head: Pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
        listint_t *current;
        listint_t *temp;

        if (head == NULL)
                return;

        current = *head;

        while (current != NULL)
        {
                temp = current;
                current = current->next;
                free(temp);
        }

        *head = NULL;
}
