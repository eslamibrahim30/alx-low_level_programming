#include "main.h"

/**
 * print_diagonal - Draws a diagonal using n number of slashes
 * @n: the number of slashes to display
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
