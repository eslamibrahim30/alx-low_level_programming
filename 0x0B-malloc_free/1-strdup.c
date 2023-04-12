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
	char *cpyStr = malloc(str != NULL ? (int)(strlen(str)) + 1 : 0);
	int len;
	int i;

	if (str == NULL || cpyStr == NULL)
	{
		return (NULL);
	}
	else
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
		{
			cpyStr[i] = str[i];
		}
		cpyStr[i] = '\0';
		return (cpyStr);
	}
}
