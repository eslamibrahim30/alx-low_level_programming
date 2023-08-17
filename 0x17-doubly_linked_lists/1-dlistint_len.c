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
