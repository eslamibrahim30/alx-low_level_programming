#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = 0;
	unsigned int idx = 0;

	if (array == NULL)
	{
		return (-1);
	}
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (idx = start; idx <= end; idx++)
		{
			if (idx == end)
				printf("%d", array[idx]);
			else
				printf("%d, ", array[idx]);
		}
		printf("\n");
		idx = (start + end) / 2;
		if (array[idx] == value)
		{
			return (idx);
		}
		else if (array[idx] < value)
		{
			start = idx + 1;
		}
		else
		{
			end = idx - 1;
		}
	}
	return (-1);
}
