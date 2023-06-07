#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: the given number
 *
 * Return: the factorial of a given number,
 * Or -1 if the given number is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < 2)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
