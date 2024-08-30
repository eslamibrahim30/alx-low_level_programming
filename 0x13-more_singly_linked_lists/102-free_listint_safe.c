#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: a pointer to the head of the list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *ptr_a = NULL;
	listint_t *ptr_b = NULL;
	listint_t *ptr_fast = NULL;

	if (h == NULL || *h == NULL)
		return (0);
	ptr_a = *h;
	ptr_b = ptr_a->next;
	ptr_fast = ptr_a->next;
	while (ptr_a != NULL)
	{
		if (ptr_fast->next != NULL && ptr_fast->next->next == ptr_b && ptr_b != NULL)
			ptr_fast->next->next = NULL;
		ptr_a->next = NULL;
		free(ptr_a);
		size++;
		ptr_a = ptr_b;
		if (ptr_b != NULL)
			ptr_b = ptr_a->next;
		if (ptr_fast->next != NULL)
			ptr_fast = ptr_fast->next->next;
	}
	*h = NULL;
	return (size);
}
