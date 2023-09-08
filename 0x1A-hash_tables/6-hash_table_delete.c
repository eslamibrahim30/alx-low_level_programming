#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Frees a hash_node_t list.
 * @head: the address of the head of the list
 */
void free_list(hash_node_t *head)
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
 * hash_table_delete - Deletes a hash table.
 * @ht: the hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
			free_list(ht->array[i]);
	free(ht->array);
	free(ht);
}
