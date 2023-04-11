#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array using memory allocation and initialize it
 * @size: the size of the array
 * @c: the value which the array should be initialized with
 *
 * Return: the address of the created array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);
	unsigned int i;

	if (size == 0 || arr == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
