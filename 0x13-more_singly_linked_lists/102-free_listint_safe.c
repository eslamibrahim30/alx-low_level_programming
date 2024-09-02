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
	listint_t *ptr_slow = NULL;
	listint_t *ptr_slow_next = NULL;
	listint_t *ptr_fast = NULL;
	listint_t *ptr_fast_prev = NULL;

	if (h == NULL || *h == NULL)
		return (0);
	ptr_slow = *h;
	ptr_fast_prev = ptr_slow;
	ptr_fast = ptr_slow;
	while (ptr_slow != NULL)
	{
		if (ptr_fast != NULL)
			ptr_fast_prev = ptr_fast->next;
		if (ptr_fast_prev != NULL)
			ptr_fast = ptr_fast_prev->next;
		if (ptr_fast_prev != NULL && (ptr_fast == ptr_slow || ptr_fast == *h))
		{
			ptr_fast_prev->next = NULL;
			ptr_fast = NULL;
			ptr_fast_prev = NULL;
		}
		ptr_slow_next = ptr_slow->next;
		ptr_slow->next = NULL;
		free(ptr_slow);
		size++;
		ptr_slow = ptr_slow_next;
	}
	*h = NULL;
	return (size);
}
