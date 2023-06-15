#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: the minimum value in the array
 * @max: the maximum value of the array
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	unsigned int i;
	unsigned int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = calloc(size, sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = min;
		min++;
	}
	return (ptr);
}
