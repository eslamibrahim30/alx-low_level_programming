#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: a pointer to the head of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: the value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *cur_node = NULL;
	unsigned int cur_idx = 0;
	unsigned int len = 0;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	cur_node = *h;
	while (cur_node != NULL)
	{
		cur_node = cur_node->next;
		len++;
	}
	if (idx >= len)
		return (NULL);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	cur_node = *h;
	if (cur_node == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	while (cur_idx != idx)
	{
		cur_node = cur_node->next;
		cur_idx++;
	}
	cur_node->prev->next = new_node;
	new_node->prev = cur_node->prev;
	new_node->next = cur_node;
	cur_node->prev = new_node;
	return (new_node);
}
