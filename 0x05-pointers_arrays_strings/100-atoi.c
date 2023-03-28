#include "main.h"

/**
 * _atoi - Convert a given string to integer
 * @s: the given string
 *
 * Return: an integer value
 */
int _atoi(char *s)
{
	int start;
	int value;
	int add;
	int minus_sign;

	start = 0;
	value = 0;
	add = 0;
	minus_sign = 0;
	while (!(*(s + start) >= '0' && *(s + start) <= '9'))
	{
		if (*(s + start) == '-')
		{
			minus_sign++;
		}
		start++;
		if (*(s + start) == '\0')
		{
			return (0);
		}
	}
	while (*(s + start) >= '0' && *(s + start) <= '9')
	{
		value *= 10;
		add = (*(s + start) - '0');
		add *= (minus_sign % 2 == 0 ? 1 : -1);
		value += add;
		start++;
	}
	return (value);
}
