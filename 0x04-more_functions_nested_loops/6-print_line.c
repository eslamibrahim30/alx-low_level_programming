#include "main.h"

/**
 * print_line - Prints line using n number of _
 * @n: the number of _ to display
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
