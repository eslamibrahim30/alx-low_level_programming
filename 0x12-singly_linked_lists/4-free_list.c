#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: the address of the head of the list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
