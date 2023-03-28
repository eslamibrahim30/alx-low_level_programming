#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: the given string
 */
void puts_half(char *str)
{
	int n;
	int end;

	end = 0;
	while (*(str + end) != '\0')
	{
		end++;
	}
	if (end % 2 == 0)
	{
		n = end / 2;
	}
	else
	{
		n = (end - 1) / 2;
	}
	while (n > 0)
	{
		_putchar(*(str + (end - n)));
		n--;
	}
	_putchar('\n');
}
