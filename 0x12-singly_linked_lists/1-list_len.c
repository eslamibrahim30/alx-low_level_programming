#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list
 * @h: the address of the head of the list
 *
 * Return:  the number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *tmp = h;

	if (h == NULL)
		return (n);
	while (tmp != NULL)
	{
		n++;
		tmp = tmp->next;
	}
	return (n);
}
