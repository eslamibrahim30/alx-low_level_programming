#include "main.h"
#include <unistd.h>

/**
 * print_sign - Print the sign of a given number
 * @n: the number to be checked
 * Return: return 1 if the num is pos, 0 if the num is 0, -1 if the num is neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}
}
