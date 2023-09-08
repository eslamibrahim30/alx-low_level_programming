#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: the size of the array.
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	new_hash = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size;
	new_hash->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	return (new_hash);
}
