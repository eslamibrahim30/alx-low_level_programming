#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: a pointer to the head of the linked list.
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur_node = NULL;
	unsigned int cur_index = 0;
	unsigned int len = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	cur_node = *head;
	while (cur_node != NULL)
	{
		cur_node = cur_node->next;
		len++;
	}
	if (index >= len)
		return (-1);
	cur_node = *head;
	while (cur_index != index)
	{
		cur_node = cur_node->next;
		cur_index++;
	}
	if (cur_node->next == NULL && cur_node->prev == NULL)
		*head = NULL;
	else if (cur_node->next == NULL)
		cur_node->prev->next = NULL;
	else if (cur_node->prev == NULL)
	{
		*head = cur_node->next;
		cur_node->next->prev = NULL;
	}
	else
	{
		cur_node->prev->next = cur_node->next;
		cur_node->next->prev = cur_node->prev;
	}
	cur_node->prev = NULL;
	cur_node->next = NULL;
	free(cur_node);
	return (1);
}
