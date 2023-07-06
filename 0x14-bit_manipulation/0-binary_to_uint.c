#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b
 * that is not 0 or 1 b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int add = 1;
	unsigned int size = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
		size++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		if (*(b + i) == '1')
			num += add;
		add *= 2;
	}
	return (num);
}
