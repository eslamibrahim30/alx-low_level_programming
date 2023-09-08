#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: the hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr = NULL;
	unsigned long int i = 0;
	int written = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (written == 1 && ht->array[i] != NULL)
		{
			printf(", ");
		}
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			written = 1;
			while (ptr->next != NULL)
			{
				printf("'%s': '%s', ", ptr->key, ptr->value);
				ptr = ptr->next;
			}
			printf("'%s': '%s'", ptr->key, ptr->value);
		}
	}
	printf("}\n");
}
