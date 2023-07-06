#include <stdio.h>
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: the number which has the values of 1 and 0.
 * @index: the given index.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c_idx = 0;
	unsigned int size = 8 * sizeof(unsigned long int);

	if (index >= size)
		return (-1);
	while (c_idx != index)
	{
		n >>= 1;
		c_idx++;
	}
	return (n & 1);
}
