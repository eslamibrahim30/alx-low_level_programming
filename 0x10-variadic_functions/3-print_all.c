#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_string - Prints a given string based on its position in a text.
 * @str: the given string.
 * @isLast: checks if a string in the last of a line of text.
 */
void print_string(char *str, int isLast)
{
	if (str == NULL)
	{
		printf((isLast ? "(nil)" : "(nil), "));
		return;
	}
	printf((isLast ? "%s" : "%s, "), str);
}

/**
 * print_all - Prints any input for the function
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int len = (format == NULL ? 0 : (unsigned int)(strlen(format)));
	char *s;
	int n;
	float f;
	char c;
	va_list ap;

	if (format != NULL)
	{
		va_start(ap, format);
		while (i < len)
		{
			switch (format[i])
			{
				case 'c':
					c = va_arg(ap, int);
					printf((i == len - 1 ? "%c" : "%c, "), c);
					break;
				case 'i':
					n = va_arg(ap, int);
					printf((i == len - 1 ? "%d" : "%d, "), n);
					break;
				case 'f':
					f = va_arg(ap, double);
					printf((i == len - 1 ? "%f" : "%f, "), f);
					break;
				case 's':
					s = va_arg(ap, char *);
					print_string(s, i == len - 1);
					break;
			}
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}
