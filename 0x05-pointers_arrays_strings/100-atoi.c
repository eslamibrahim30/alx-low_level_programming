#include "main.h"

/**
 * _atoi - Convert a given string to integer
 * @str: the given string
 *
 * Return: an integer value
 */
int _atoi(char *s)
{
	int start;
	int end;
	int value;
	int pow;
	int add;
	int sign;

	start = 0;
	end = 0;
	value = 0;
	pow = 0;
	add = 0;
	sign = 1;
	while (!(*(s + start) >= '0' && *(s + start) <= '9'))
	{
		if (*(s + start) == '-' && *(s + start + 1) >= '0' && *(s + start + 1) <= '9')
		{
			sign = -1;
			start++;
			break;
		}
		start++;
		if (*(s + start) == '\0')
		{
			return (0);
		}
	}
	end = start;
	while (*(s + end) >= '0' && *(s + end) <= '9')
	{
		end++;
	}
	end--;
	while (start <= end)
	{
		pow = end - start;
		add = (*(s + start) - '0');
		add *= sign;
		while (pow)
		{
			add *= 10;
			pow--;
		}
		value += add;
		start++;
	}
	return (value);
}
