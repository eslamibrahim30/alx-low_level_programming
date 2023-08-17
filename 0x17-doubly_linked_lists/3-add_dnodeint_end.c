#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: a pointer to the head of the linked list.
 * @n: the value of the new added node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr_cur = NULL;
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ptr_cur = *head;
		while (ptr_cur->next != NULL)
			ptr_cur = ptr_cur->next;
		ptr_cur->next = new_node;
		new_node->prev = ptr_cur;
	}
	return (new_node);
}
