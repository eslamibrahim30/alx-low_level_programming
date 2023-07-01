#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: the address of the head of the list
 * @str: the value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *itr;
	unsigned int size = 0;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (node != NULL && *(str + size) != '\0')
		size++;
	node->len = size;
	node->next = NULL;
	itr = *head;
	if (itr == NULL)
	{
		*head = node;
	}
	else
	{
		while (itr->next != NULL)
			itr = itr->next;
		itr->next = node;
	}
	return (node);
}
