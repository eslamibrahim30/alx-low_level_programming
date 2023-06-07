#include "main.h"

/**
 * _pow_recursion - Calculate the value of x raised to the power of y
 * @x: the base value
 * @y: the power value
 *
 * Return: the value of x raised to the power of y,
 * Or -1 If y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
