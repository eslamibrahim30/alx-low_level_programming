#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: the given string
 */
void print_rev(char *s)
{
	int len;
	char *temp;

	len = 0;
	temp = s;
	while (*temp != '\0')
	{
		len++;
		temp = temp + 1;
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
