#include "function_pointers.h"

/**
 * print_name - Prints a name in specific format
 * @name: the given name
 * @f: a pointer to the function which is used to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
