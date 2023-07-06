#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: the given bits.
 * @index: the given index.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = 8 * sizeof(unsigned long int);

	if (index >= size || n == NULL)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
