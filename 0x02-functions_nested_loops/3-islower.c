#include "main.h"
#include <unistd.h>

/**
 * _islower - return 1 if the char is lower or 0 otherwise
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
