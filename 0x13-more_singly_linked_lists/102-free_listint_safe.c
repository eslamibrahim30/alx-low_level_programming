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
	listint_t *ptr = NULL;
	listint_t *ptr_next = NULL;

	if (h == NULL || *h == NULL)
		return (0);
	ptr = *h;
	while (ptr->next != NULL && ptr->next->next != NULL)
	{
		ptr_next = ptr->next;
		ptr->next = ptr_next->next;
		ptr_next->next = NULL;
		free(ptr_next);
		size++;
	}
	if (ptr->next != NULL && ptr->next->next != NULL)
	{
		free(ptr->next);
		size++;
	}
	free(ptr);
	size++;
	*h = NULL;
	return (size);
}
