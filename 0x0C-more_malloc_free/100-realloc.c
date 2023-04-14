#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: the address of the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_p;
	char *itr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		new_p = malloc(new_size);
		return (new_p);
	}
	else
	{
		new_p = malloc(new_size);
		itr = ptr;
		if (new_p == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size && i < new_size; i++)
		{
			new_p[i] = itr[i];
		}
		free(ptr);
		return (new_p);
	}
}
