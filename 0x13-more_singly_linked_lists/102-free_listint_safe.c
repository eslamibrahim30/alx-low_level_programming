#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * find_listint_loop - Finds a loop in a listint_t linked list.
 * @head: the head of the linked list.
 *
 * Return: the address of the node where the loop end,
 * Or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr_slow = NULL;
	listint_t *ptr_fast = NULL;
	listint_t *ptr_fast_prev = NULL;

	ptr_slow = head;
	ptr_fast = head;
	while (1)
	{
		if (ptr_slow == NULL || ptr_fast == NULL || ptr_fast->next == NULL)
			return (NULL);
		ptr_slow = ptr_slow->next;
		ptr_fast_prev = ptr_fast->next;
		ptr_fast = ptr_fast_prev->next;
		if (ptr_fast == ptr_slow)
			break;
	}
	ptr_slow = head;
	while (ptr_slow != ptr_fast)
	{
		ptr_slow = ptr_slow->next;
		ptr_fast_prev = ptr_fast;
		ptr_fast = ptr_fast_prev->next;
	}
	return (ptr_fast_prev);
}


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
	listint_t *ptr_loop_end = NULL;

	if (h == NULL || *h == NULL)
		return (0);
	ptr_loop_end = find_listint_loop(*h);
	if (ptr_loop_end != NULL)
		ptr_loop_end->next = NULL;
	ptr = *h;
	while (ptr != NULL)
	{
		ptr_next = ptr->next;
		ptr->next = NULL;
		free(ptr);
		size++;
		ptr = ptr_next;
	}
	*h = NULL;
	return (size);
}
