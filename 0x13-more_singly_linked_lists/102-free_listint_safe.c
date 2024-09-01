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
	listint_t *ptr_fast_prev = NULL;

	if (h == NULL || *h == NULL)
		return (0);
	ptr_a = *h;
	ptr_fast_prev = ptr_a;
	ptr_fast = ptr_a->next;
	while (ptr_a != NULL)
	{
		ptr_b = ptr_a->next;
		if (ptr_fast_prev != NULL && ptr_fast == ptr_a)
			ptr_fast_prev->next = NULL;
		if (ptr_fast != NULL)
			ptr_fast_prev = ptr_fast->next;
		else
			ptr_fast_prev = NULL;
		if (ptr_fast_prev != NULL)
			ptr_fast = ptr_fast_prev->next;
		ptr_a->next = NULL;
		free(ptr_a);
		size++;
		ptr_a = ptr_b;
	}
	*h = NULL;
	return (size);
}
