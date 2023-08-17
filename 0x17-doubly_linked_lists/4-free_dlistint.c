#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: the head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	free_dlistint(head->next);
	free(head);
}
