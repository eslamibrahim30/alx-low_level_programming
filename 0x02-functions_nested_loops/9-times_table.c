#include "main.h"
#include <unistd.h>

/**
 * times_table - print the times table for 9
 */
void times_table(void)
{
	int first;
	int second;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			if (first * second > 9)
			{
				_putchar(' ');
				_putchar('0' + ((first * second) / 10) % 10);
				_putchar('0' + ((first * second) % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + first * second);
			}
			if (second != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
