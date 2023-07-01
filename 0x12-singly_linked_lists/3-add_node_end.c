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
	list_t *itr;
	unsigned int size = 0;

	itr = *head;
	if (itr == NULL)
	{
		itr = (list_t *)malloc(sizeof(list_t));
	}
	else
	{
		while (itr->next != NULL)
			itr = itr->next;
		itr->next = (list_t *)malloc(sizeof(list_t));
		itr = itr->next;
	}
	if (itr == NULL)
		return (NULL);
	itr->str = strdup(str);
	while (str != NULL && *(str + size) != '\0')
		size++;
	itr->len = size;
	itr->next = NULL;
	return (itr);
}
