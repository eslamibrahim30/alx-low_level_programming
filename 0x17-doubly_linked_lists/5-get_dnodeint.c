#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: the head of the linked list.
 * @index: the index of the node, starting from 0.
 *
 * Return: the address of the node. if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr_cur = NULL;
	unsigned int cur_index = 0;

	if (head == NULL)
		return (NULL);
	ptr_cur = head;
	while (cur_index != index && ptr_cur != NULL)
	{
		ptr_cur = ptr_cur->next;
		cur_index++;
	}
	return (ptr_cur);
}
