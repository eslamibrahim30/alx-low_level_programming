#include "hash_tables.h"
#include "stdio.h"

/**
 * key_index - Gives you the index of a key in a hash table.
 * @key: The key to be indexed.
 * @size: the size of the hash table.
 *
 * Return: the index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
