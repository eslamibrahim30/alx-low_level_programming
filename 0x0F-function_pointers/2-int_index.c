#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in a given array
 * @array: the given array
 * @size: the size of the given array
 * @cmp: a pointer to the function which is used in search
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0,
 * If no element matches or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
