#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints the given number
 * @n: the given number
 */
void print_number(int n)
{
	unsigned int mul;
	int c_n;
	int p_n;

	mul = 0;
	c_n = n;
	if (n < 0)
	{
		_putchar('-');
	}
	while (c_n != 0)
	{
		if (mul == 0)
		{
			mul = 1;
		}
		else
		{
			mul *= 10;
		}
		c_n /= 10;
	}
	c_n = n;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (mul)
		{
			p_n = c_n / mul;
			p_n %= 10;
			if (p_n < 0)
			{
				p_n *= -1;
			}
			_putchar('0' + p_n);
			mul /= 10;
		}
	}
}
