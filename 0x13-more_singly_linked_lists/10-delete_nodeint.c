#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index
 * of a listint_t linked list.
 * @head: a pointer to the address of the head of the list.
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int size = 0;
	listint_t *ptr;
	listint_t *ptr_after;
	listint_t *ptr_before;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	if (index >= size)
		return (-1);
	ptr = *head;
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	ptr_after = ptr->next;
	ptr_before = *head;
	while (index != 0 && ptr_before->next != ptr)
		ptr_before = ptr_before->next;
	if (index == 0)
		*head = ptr_after;
	if (index + 1 == size)
		ptr_before->next = NULL;
	else
		ptr_before->next = ptr_after;
	free(ptr);
	return (1);
}
