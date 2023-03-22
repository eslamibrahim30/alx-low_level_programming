#include "main.h"
#include <unistd.h>
#include <stdio.h>

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
			printf("%03d", first * second);
			if (second != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
