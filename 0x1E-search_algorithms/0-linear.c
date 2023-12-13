#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located.
 * If value is not present in array or if array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int idx = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (idx < size)
	{
		printf("Value checked array[%u] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
		idx++;
	}
	return (-1);
}
