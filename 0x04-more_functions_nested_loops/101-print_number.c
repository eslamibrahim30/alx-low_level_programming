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
		mul = mul == 0 ? 1 : mul * 10;
		c_n /= 10;
	}
	c_n = n > -2147483648  && n < 0 ? -1 * n : n;
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
			p_n = p_n < 0 ? -1 * p_n : p_n;
			_putchar('0' + p_n);
			mul /= 10;
		}
	}
}
