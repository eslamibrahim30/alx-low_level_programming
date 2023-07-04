#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Gets node at a specified index in a list.
 * @head: the address of the head of the list.
 * @index: the index of the target node.
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr != NULL && i != index)
	{
		ptr = ptr->next;
		i++;
	}
	if (i != index)
		return (NULL);
	else
		return (ptr);
}
