#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: the head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
