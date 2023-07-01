#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: the address of the list where the new node is added
 * @str: the value of the new node
 *
 * Return: the created list with the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int size = 0;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (*(str + size) != '\0' && str != NULL)
		size++;
	node->len = size;
	node->next = *head;
	*head = node;
	return (*head);
}
