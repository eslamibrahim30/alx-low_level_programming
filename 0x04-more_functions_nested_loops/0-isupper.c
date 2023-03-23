#include "main.h"

/**
 * _isupper - checks if the char is upper case 
 * @c: the char to be checked
 * Return: return 1 if the char is upper or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
