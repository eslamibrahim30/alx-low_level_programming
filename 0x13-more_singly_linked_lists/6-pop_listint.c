#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: the address of the head of the list.
 *
 * Return: the value of the popped node.
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *ptr;
	listint_t *ptr_next;

	ptr = *head;
	ptr_next = ptr->next;
	val = ptr->n;
	free(ptr);
	*head = ptr_next;
	return (val);
}
