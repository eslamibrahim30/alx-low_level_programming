#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list.
 * @h: the given list.
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_c = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		nodes_c++;
		ptr = ptr->next;
	}
	return (nodes_c);
}
