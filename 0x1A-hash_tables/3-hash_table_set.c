#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key to be paired with the value.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *ptr = NULL;
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
		new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
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
	}
	return (1);
}
