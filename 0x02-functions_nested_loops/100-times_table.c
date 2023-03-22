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
	int ans;

	if (n > 15 || n < 0)
	{
		return;
	}
	first = 0;
	second = 0;
	while (1)
	{
		ans = first * second;
		if (second == 0)
		{
			_putchar('0' + ans);
		}
		else
		{
			_putchar(' ');
			_putchar(ans > 99 ? '0' + (ans / 100) : ' ');
			_putchar(ans > 9 ? '0' + (ans / 10) % 10 : ' ');
			_putchar('0' + ans % 10);
		}
		if (second != n)
		{
			_putchar(',');
		}
		else
		{
			_putchar('\n');
		}
		if (second == n && first == n)
		{
			break;
		}
		first = second == n ? first + 1 : first;
		second = second == n ? 0 : second + 1;
	}
}
