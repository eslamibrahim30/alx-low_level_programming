#include "main.h"

/**
 * _find_sqrt - calculate the sqrt value using guesses
 * @number: the given number
 * @value: the guessed sqrt value
 *
 * Return: if there is a natural sqrt value, it will return it.
 * else -> return -1
 */
int _find_sqrt(int number, int value)
{
	if (value > number)
	{
		return (-1);
	}
	else if (value * value == number)
	{
		return (value);
	}
	else
	{
		return (_find_sqrt(number, value + 1));
	}
}


/**
 * _sqrt_recursion - Computes the natural square root of a number
 * @n: the given number
 *
 * Return: the natural square root of the given number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_find_sqrt(n, 1));
	}
}
