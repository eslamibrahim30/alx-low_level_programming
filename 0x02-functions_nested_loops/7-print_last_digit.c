#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - Get the last digit of a given number
 * @n: the number to be checked
 * Return: return the last digit of a given number
 */
int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return (n % 10);
}
