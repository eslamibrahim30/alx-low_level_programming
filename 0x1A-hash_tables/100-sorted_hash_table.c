#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: the size of the array of the hash table.
 *
 * Return: a pointer to the newly created hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_shash = NULL;
	unsigned long int i = 0;

	new_shash = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (new_shash == NULL)
		return (NULL);
	new_shash->size = size;
	new_shash->array = (shash_node_t **)malloc(size * sizeof(shash_node_t *));
	if (new_shash->array == NULL)
	{
		free(new_shash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_shash->array[i] = NULL;
	new_shash->shead = NULL;
	new_shash->stail = NULL;
	return (new_shash);
}

/**
 * shash_table_connect - Connect a new added node to a sorted hash table.
 * @ht: the sorted hash table.
 * @new_node: the new added node.
 */
void shash_table_connect(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *ptr = NULL;

	ptr = ht->shead;
	if (ptr == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
	}
	else
	{
		while (ptr->snext != NULL && strcmp(new_node->key, ptr->key) > 0)
			ptr = ptr->snext;
		if (strcmp(new_node->key, ptr->key) < 0)
		{
			new_node->snext = ptr;
			new_node->sprev = ptr->sprev;
			if (ptr->sprev == NULL)
				ht->shead = new_node;
			else
				ptr->sprev->snext = new_node;
			ptr->sprev = new_node;
		}
		else
		{
			new_node->snext = ptr->snext;
			new_node->sprev = ptr;
			if (ptr->snext == NULL)
				ht->stail = new_node;
			else
				ptr->snext->sprev = new_node;
			ptr->snext = new_node;
		}
	}
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key to be paired with the value.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL;
	shash_node_t *ptr = NULL;
	unsigned long int index = 0;

	if (ht == NULL || ht->size == 0 || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL && strcmp(ptr->key, key) != 0)
		ptr = ptr->next;
	if (ptr != NULL && strcmp(ptr->key, key) == 0)
	{
		free(ptr->value);
		ptr->value = strdup(value);
	}
	else
	{
		new_node = (shash_node_t *)malloc(sizeof(shash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		if (new_node->key == NULL)
		{
			free(new_node);
			return (0);
		}
		new_node->value = strdup(value);
		if (new_node->value == NULL)
		{
			free(new_node->key);
			free(new_node);
			return (0);
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		shash_table_connect(ht, new_node);
	}
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: the given hash table.
 * @key: the key you are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *ptr = NULL;

	if (ht == NULL || ht->size == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: the hash table to be printed.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t  *ptr = NULL;

	if (ht == NULL)
		return;
	ptr = ht->shead;
	printf("{");
	while (ptr->snext != NULL)
	{
		printf("'%s': '%s', ", ptr->key, ptr->value);
		ptr = ptr->snext;
	}
	printf("'%s': '%s'}\n", ptr->key, ptr->value);
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: the hash table to be printed.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t  *ptr = NULL;

	if (ht == NULL)
		return;
	ptr = ht->stail;
	printf("{");
	while (ptr->sprev != NULL)
	{
		printf("'%s': '%s', ", ptr->key, ptr->value);
		ptr = ptr->sprev;
	}
	printf("'%s': '%s'}\n", ptr->key, ptr->value);
}

/**
 * free_list - Frees a shash_node_t list.
 * @head: the address of the head of the list
 */
void free_list(shash_node_t *head)
{
	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head->key);
		free(head->value);
		free(head);
		return;
	}
	free_list(head->next);
	free(head->key);
	free(head->value);
	free(head);
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: the hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *ptr = NULL;

	if (ht == NULL)
		return;
	ptr = ht->shead;
	while (ptr->snext != NULL)
	{
		ptr->sprev = NULL;
		ptr = ptr->snext;
	}
	ptr->sprev = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
			free_list(ht->array[i]);
	free(ht->array);
	free(ht);
}
