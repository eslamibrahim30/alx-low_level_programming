#include "main.h"

/**
 * is_divisor - Checks if a divisor is a valid divisor of a given number
 * @n: the given number
 * @divisor: the given divisor
 *
 * Return: 0 if the given divisor is valid, 1 otherwise
 */
int is_divisor(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_divisor(n, divisor + 1));
}

/**
 * is_prime_number - Checks if the given number is prime or not
 * @n: the given number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_divisor(n, 2));
}
