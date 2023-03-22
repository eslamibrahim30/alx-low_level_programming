#include "main.h"
#include <unistd.h>

/**
 * _abs - returns the absolute value of a number
 * @n: the number to be checked
 * Return: returns the absolute value (integer)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}
