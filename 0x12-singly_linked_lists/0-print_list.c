#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list
 * @h: the given list
 *
 * Return: the number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;
	const list_t *head;

	if (h == NULL)
	{
		return (0);
	}
	head = h;
	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		s++;
		head = head->next;
	}
	return (s);
}
