#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: the given name
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
