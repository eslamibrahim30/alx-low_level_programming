#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: the number of array elements
 * @size: the size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = calloc(nmemb, size);
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
