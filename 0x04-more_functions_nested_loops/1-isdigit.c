#include "main.h"

/**
 * _isdigit - Checks if the char is a digit
 * @c: the char to be checked
 * Return: return 1 if the char is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
