#include "main.h"
#include <unistd.h>

/**
 * _isalpha - Check if the char is alpha
 * @c: the char to be checked
 * Return: return 1 if the char is alpha or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
