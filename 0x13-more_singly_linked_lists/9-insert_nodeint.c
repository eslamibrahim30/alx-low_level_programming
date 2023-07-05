#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: a pointer to the address of the head of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: the value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr_before;
	listint_t *ptr_after;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	ptr_after = *head;
	while (ptr_after != NULL && i < idx)
	{
		ptr_after = ptr_after->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	ptr_before = *head;
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = ptr_after;
		return (new_node);
	}
	i = 0;
	while (ptr_before != NULL && i + 1 < idx)
	{
		ptr_before = ptr_before->next;
		i++;
	}
	ptr_before->next = new_node;
	new_node->next = ptr_after;
	return (new_node);
}
