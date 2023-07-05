#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: a pointer to the head of the linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_a = NULL;
	listint_t *ptr_b = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	ptr_b = *head;
	ptr_a = ptr_b->next;
	ptr_b->next = NULL;
	if (ptr_a == NULL)
		return (*head);
	ptr_b = ptr_a->next;
	while (ptr_b != NULL)
	{
		ptr_a->next = *head;
		*head = ptr_a;
		ptr_a = ptr_b;
		ptr_b = ptr_b->next;
	}
	ptr_a->next = *head;
	*head = ptr_a;
	return (*head);
}
