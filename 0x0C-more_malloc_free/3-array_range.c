#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: the minimum value which the array contains
 * @max: the maximum value which the array contains
 *
 * Return: the address of the created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int value;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	value = min;
	for (i = 0; i < max - min + 1; i++)
	{
		arr[i] = value;
		value++;
	}
	return (arr);

}
