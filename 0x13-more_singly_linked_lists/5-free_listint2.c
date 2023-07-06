#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: the address of the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptr_next;

	if (head == NULL)
		return;
	ptr = *head;
	while (ptr != NULL)
	{
		ptr_next = ptr->next;
		free(ptr);
		ptr = ptr_next;
	}
	*head = NULL;
}
