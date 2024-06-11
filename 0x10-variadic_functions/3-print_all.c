#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - Prints any input for the function
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int len = (unsigned int)(strlen(format));
	char *s;
	int n;
	float f;
	char c;
	va_list ap;

	if (format == NULL)
		return;
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
				if (s == NULL)
				{
					printf((i == len - 1 ? "(nil)" : "(nil), "));
					continue;
				}
				printf((i == len - 1 ? "%s" : "%s, "), s);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
