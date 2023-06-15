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
	void **arr = NULL;
	unsigned int i = 0;
	unsigned int j = 0;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = (void **)malloc(nmemb * sizeof(void *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = malloc(size);
		if (arr[i] == NULL)
		{
			for (j = i - 1; ; j--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}
	return (*arr);
}
