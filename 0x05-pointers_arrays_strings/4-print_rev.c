#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: the given string
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
