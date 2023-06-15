#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size of the memory previously allocated
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: a pointer to the allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory = NULL;
	unsigned int i = 0;
	unsigned int size = 0;

	if (ptr == NULL)
	{
		memory = malloc(new_size);
		return (memory);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (old_size == new_size)
	{
		return (ptr);
	}
	memory = malloc(new_size);
	if (memory == NULL)
	{
		return (NULL);
	}
	size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < size; i++)
	{
		*((char *)memory + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (memory);
}
