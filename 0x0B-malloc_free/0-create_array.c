#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars.
 * @size: the size of the given array
 * @c: the char which will be used to initialize the array
 *
 * Return: a pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	ptr = arr;
	while (size > 0)
	{
		*ptr = c;
		ptr++;
		size--;
	}
	return (arr);
}
