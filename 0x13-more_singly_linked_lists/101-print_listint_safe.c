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
	const listint_t *ptr_a = NULL;
	const listint_t *ptr_b = NULL;

	if (head == NULL)
		exit(98);
	ptr_a = head;
	ptr_b = head;
	while (ptr_a != NULL)
	{
		printf("[%p] %d\n", (void *)ptr_a, ptr_a->n);
		size++;
		if (ptr_b == ptr_a && ptr_b != head)
			break;
		ptr_a = ptr_a->next;
		if (ptr_b != NULL && ptr_b->next != NULL)
			ptr_b = ptr_b->next->next;
	}
	if (ptr_a == NULL)
		return (size);
	ptr_a = head;
	while (1)
	{
		ptr_b = ptr_b->next;
		ptr_a = ptr_a->next;
		if (ptr_b == ptr_a)
			break;
		printf("[%p] %d\n", (void *)ptr_b, ptr_b->n);
		size++;
	}
	printf("-> [%p] %d\n", (void *)ptr_a, ptr_a->n);
	return (size);
}
