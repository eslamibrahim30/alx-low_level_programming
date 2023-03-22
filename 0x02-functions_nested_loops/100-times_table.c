#include "main.h"
#include <unistd.h>

/**
 * times_table - print the times table for a given num betwewen 0 and 15
 * @n: the given number to make its times table
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	int first;
	int second;

	for (first = 0; first <= n; first++)
	{
		for (second = 0; second <= n; second++)
		{
			if (second == 0)
			{
				_putchar('0' + first * second);
			}
			else if (first * second > 99)
			{
				_putchar(' ');
				_putchar('0' + ((first * second) / 100) % 10);
				_putchar('0' + ((first * second) / 10) % 10);
				_putchar('0' + ((first * second) % 10));
			}
			else if (first * second > 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ((first * second) / 10) % 10);
				_putchar('0' + ((first * second) % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + first * second);
			}
			if (second != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
