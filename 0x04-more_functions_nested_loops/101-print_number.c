#include "main.h"

/**
 * print_number - Prints the given number
 * @n: the given number
 */
void print_number(int n)
{
	unsigned int reversed_n;
	int copy_n;
	int mul;

	mul = 1;
	reversed_n = 0;
	copy_n = n;
	while (copy_n != 0)
	{
		mul *= 10;
		copy_n /= 10;
	}
	mul /= 10;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		while (n)
		{
			reversed_n += (n % 10) * mul;
			mul /= 10;
			n /= 10;
		}
		while (reversed_n)
		{
			_putchar('0' + reversed_n % 10);
			reversed_n /= 10;
		}

	}
}
