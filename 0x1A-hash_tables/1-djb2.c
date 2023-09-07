#include "hash_tables.h"
#include "stdio.h"

/**
 * hash_djb2 - A hash function implementing the djb2 algorithm.
 * @str: string used to generate the hash value.
 *
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
