#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - print chars from a to z
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
