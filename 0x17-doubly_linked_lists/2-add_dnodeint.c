#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: a pointer to the head of the linked list.
 * @n: the value of the new added node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *ptr_h = NULL;

	if (head == NULL)
		return (NULL);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	ptr_h = *head;
	if (ptr_h == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = ptr_h;
		ptr_h->prev = new_node;
	}
	new_node->n = n;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
