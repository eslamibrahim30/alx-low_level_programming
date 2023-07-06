#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: the head of the linked list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	int is_loop = 0;
	const listint_t *ptr_a = NULL;
	const listint_t *ptr_b = NULL;

	if (head == NULL)
		return (0);
	ptr_a = head;
	ptr_b = head;
	while (ptr_a != NULL)
	{
		if (is_loop == 0)
		{
			printf("[%p] %d\n", (void *)ptr_a, ptr_a->n);
			size++;
			ptr_a = ptr_a->next;
			if (ptr_b != NULL && ptr_b->next != NULL)
				ptr_b = ptr_b->next->next;
		}
		else
		{
			printf("[%p] %d\n", (void *)ptr_b, ptr_b->n);
			size++;
			ptr_a = ptr_a->next;
			ptr_b = ptr_b->next;
		}
		if (is_loop == 1 && ptr_a == ptr_b)
			break;
		else if (ptr_a == ptr_b && ptr_a != NULL)
		{
			is_loop = 1;
			ptr_a = head;
		}
	}
	if (ptr_a == NULL)
		return (size);
	printf("-> [%p] %d\n", (void *)ptr_a, ptr_a->n);
	return (size);
}
