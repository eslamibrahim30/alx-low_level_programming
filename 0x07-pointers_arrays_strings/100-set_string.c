#include "main.h"
#include <stdlib.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: the original string
 * @to: the converted string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
