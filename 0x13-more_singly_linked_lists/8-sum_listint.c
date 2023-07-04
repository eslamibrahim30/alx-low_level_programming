#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n)
 * of a listint_t linked list.
 * @head: the address of the head of the linked list.
 *
 * Return: the sum of all the data (n) of the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
