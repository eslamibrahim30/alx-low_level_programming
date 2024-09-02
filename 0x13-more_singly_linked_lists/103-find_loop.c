#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a listint_t linked list.
 * @head: the head of the linked list.
 *
 * Return: the address of the node where the loop starts,
 * Or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr_slow = NULL;
	listint_t *ptr_fast = NULL;

	ptr_slow = head;
	ptr_fast = head;
	while (true)
	{
		if (ptr_slow != NULL && ptr_fast != NULL && ptr_fast->next != NULL)
			return (NULL);
		ptr_slow = ptr_slow->next;
		ptr_fast = ptr_fast->next->next;
		if (ptr_fast == ptr_slow)
			break;
	}
	ptr_slow = head;
	while (ptr_slow != ptr_fast)
	{
		ptr_slow = ptr_slow->next;
		ptr_fast = ptr_fast->next;
	}
	return (ptr_slow);
}
