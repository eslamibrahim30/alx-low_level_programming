#include "main.h"
#include <unistd.h>

/**
 * print_to_98 - Prints all natural numbers from given number to 98
 */
void print_to_98(int n)
{
	int add;
	int num;

	num = n;
	if (n > 98)
	{
		add = -1;
	}
	else
	{
		add = 1;
	}
	while (1)
	{
		num = n;
		if (num == 98)
		{
			_putchar('0' + 9);
			_putchar('0' + 8);
			break;
		}
		else
		{
			while (num > 0)
			{
				_putchar('0' + num % 10);
				num = num / 10;
			}
			_putchar(',');
			_putchar(' ');
			n = n + add;
		}
	}
}
