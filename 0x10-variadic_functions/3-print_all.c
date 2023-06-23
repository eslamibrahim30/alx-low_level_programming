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
	unsigned int size = strlen(format);
	char buffer[1000];
	char ans[1000];
	char *s;
	int n;
	float f;
	char c;
	va_list ap;

	if (format == NULL)
		return;
	va_start(ap, format);
	while (i < size)
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(ap, int);
				sprintf(buffer, "%c, ", c);
				strcat(ans, buffer);
				break;
			case 'i':
				n = va_arg(ap, int);
				sprintf(buffer, "%d, ", n);
				strcat(ans, buffer);
				break;
			case 'f':
				f = va_arg(ap, double);
				sprintf(buffer, "%f, ", f);
				strcat(ans, buffer);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					sprintf(buffer, "(nil), ");
					strcat(ans, buffer);
					break;
				}
				sprintf(buffer, "%s, ", s);
				strcat(ans, buffer);
				break;
		}
		i++;
	}
	strncpy(buffer, ans, strlen(ans) - 2);
	printf("%s\n", buffer);
}
