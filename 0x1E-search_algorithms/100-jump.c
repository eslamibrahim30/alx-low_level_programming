#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers using
 * the Jump search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = sqrt(size);
	size_t step = sqrt(size);

	while (array[b < size ? b : size - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		a = b;
		b += step;
		if (a >= size)
		{
			a -= step;
			b -= step;
			printf("Value found between indexes [%lu] and [%lu]\n", a, b);
			while (array[a] < value)
			{
				printf("Value checked array[%lu] = [%d]\n", a, array[a]);
				a++;
				if (a == (b < size ? b + 1 : size))
					return (-1);
			}
			printf("Value checked array[%lu] = [%d]\n", a, array[a]);
			return (-1);
		}
	}
	printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	while (array[a] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		a++;
		if (a == (b < size ? b + 1 : size))
			return (-1);
	}
	printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	if (array[a] == value)
		return (a);
	return (-1);
}
