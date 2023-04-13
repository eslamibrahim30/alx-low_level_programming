#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: the amount of allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
