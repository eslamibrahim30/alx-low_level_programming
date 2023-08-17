#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: the head of the list.
 *
 * Return: the number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}

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

	len = dlistint_len(h == NULL ? NULL : *h);
	if (h == NULL || (*h == NULL && idx != 0) || idx > len)
		return (NULL);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	cur_node = *h;
	if (cur_node == NULL)
		*h = new_node;
	else if (idx == 0)
	{
		new_node->next = cur_node;
		cur_node->prev = new_node;
		*h = new_node;
	}
	else if (idx == len)
	{
		while (cur_node->next != NULL)
			cur_node = cur_node->next;
		cur_node->next = new_node;
	}
	else
	{
		while (cur_idx++ != idx)
			cur_node = cur_node->next;
		cur_node->prev->next = new_node;
		new_node->prev = cur_node->prev;
		new_node->next = cur_node;
		cur_node->prev = new_node;
	}
	return (new_node);
}
