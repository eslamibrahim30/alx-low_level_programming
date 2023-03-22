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
			_putchar('0' + (first * second) % 10);
			if ((first * second) / 10 != 0)
			{
				_putchar('0' + ((first * second) / 10) % 10);
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
