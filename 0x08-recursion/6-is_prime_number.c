#include "main.h"

/**
 * check_prime - Checks if the given number is prime by checking
 * if it has any divisor other than 1 or the number itself
 * @n: the given number
 * @d: the number that would be checked if it is a divisor
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int check_prime(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	else if (d * d > n)
	{
		return (1);
	}
	else
	{
		return (check_prime(n, d + 1));
	}
}

/**
 * is_prime_number - Checks if a given number is prime
 * @n: the given number
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, 2));
	}
}

