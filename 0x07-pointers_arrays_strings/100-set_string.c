#include "main.h"
#include <stdlib.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: the original string
 * @to: the converted string
 */
void set_string(char **s, char *to)
{
	char *ns;
	int idx;

	idx = 0;
	ns = malloc(255);
	while (*(to + idx) != '\0')
	{
		*(ns + idx) = *(to + idx);
		idx++;
	}
	*s = ns;
}
