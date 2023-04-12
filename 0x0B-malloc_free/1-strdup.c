#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Copy string to a new allocated memory
 * @str: the copied string
 *
 * Return: the address of the copied string
 */
char *_strdup(char *str)
{
	char *cpyStr = malloc(strlen(str));
	int len;
	int i;

	if (str == 0 || cpyStr == 0)
	{
		return (0);
	}
	else
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
		{
			cpyStr[i] = str[i];
		}
		return (cpyStr);
	}
}
