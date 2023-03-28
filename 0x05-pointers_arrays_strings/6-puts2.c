#include "main.h"

/**
 * puts2 - Print every other char of a string
 * @str: the given string
 */
void puts2(char *str)
{
	int start;
	int end;

	end = 0;
	while (*(str + end) != '\0')
	{
		end++;
	}
	end--;
	start = 0;
	while (start <= end)
	{
		_putchar(*(str + start));
		start += 2;
	}
	_putchar('\n');
}
