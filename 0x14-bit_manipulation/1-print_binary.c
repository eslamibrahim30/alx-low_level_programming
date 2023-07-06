#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: the given number.
 */
void print_binary(unsigned long int n)
{
	int size = 0;
	unsigned long int max_2 = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((max_2 << size) < n)
		size++;
	if ((max_2 << size) > n)
		size--;
	while (size >= 0)
	{
		if ((max_2 << size) & n)
			_putchar('1');
		else
			_putchar('0');
		size--;
	}
}
