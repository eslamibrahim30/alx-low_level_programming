#include <stdio.h>
#include <stdlib.h>
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
	listint_t *ptr_a = NULL;
	listint_t *ptr_b = NULL;

	if (head == NULL)
		return (0);
	ptr_a = head;
	ptr_b = head;
	while (ptr_a != NULL)
	{
		printf("[%p] %d\n", (void *)ptr_a, ptr_a->n);
		ptr_a = ptr_a->next;
		if (ptr_b != NULL && ptr_b->next != NULL)
			ptr_b = ptr_b->next->next;
		if (ptr_b == ptr_a && ptr_a == head)
		{
			printf("-> [%p] %d\n", (void *)ptr_a, ptr_a->n);
			return (ptr_a);
		}
		if (ptr_b == ptr_a)
			break;

	}
	if (ptr_a == NULL)
		return (NULL);
	ptr_a = head;
	while (ptr_a != ptr_b)
	{
		printf("[%p] %d\n", (void *)ptr_b, ptr_b->n);
		ptr_a = ptr_a->next;
		ptr_b = ptr_b->next;
	}
	printf("-> [%p] %d\n", (void *)ptr_a, ptr_a->n);
	return (ptr_a);
}
