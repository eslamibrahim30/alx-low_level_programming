#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - print chars from a to z
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
