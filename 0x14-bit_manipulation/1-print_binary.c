#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: the given number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int size = 0;
	unsigned long int copy_n = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (copy_n)
	{
		copy_n >>= 1;
		size++;
	}
	size--;
	while (1)
	{
		if ((n >> size) & 1)
			_putchar('1');
		else
			_putchar('0');
		if (size == 0)
			break;
		size--;
	}
}
