#include "main.h"

/**
 * _good_enough - Check if a guess of the square root is right
 * @n: the number whose square root needs to be calculated
 * @guess: the guess value of that square root
 *
 * Return: the guessed square root if it is suitable, -1 otherwise
 */
int _good_enough(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (_good_enough(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: the given number
 *
 * Return: the value of the square root of the given number,
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (_good_enough(n, 1));
}
