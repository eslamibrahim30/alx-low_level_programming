#include "main.h"
#include <unistd.h>

/**
 * print_times_table - print the times table for a given num betwewen 0 and 15
 * @n: the given number to make its times table
 */
void print_times_table(int n)
{
	int first;
	int second;

	if (n > 15 || n < 0)
		return;
	while (1)
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
		if (second != n)
			_putchar(',');
		_putchar('\n');
		if (second == n && first == n)
			break;
		first = second == n ? first + 1 : first;
		second = second == n ? 0 : second + 1;
	}
}
