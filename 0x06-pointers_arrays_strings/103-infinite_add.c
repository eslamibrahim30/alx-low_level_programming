#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Get the length of the given string
 * @s: the given string address
 * Return: the length of the given string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * rev_string - Reverse a string
 * @s: the given string
 */
void rev_string(char *s)
{
	int start;
	int end;
	char tmp;

	end = 0;
	while (*(s + end) != '\0')
	{
		end++;
	}
	end--;
	start = 0;
	while (start < end)
	{
		tmp = *(s + start);
		*(s + start) = *(s + end);
		*(s + end) = tmp;
		start++;
		end--;
	}
}

/**
 * _strcpy - Copy source string to a destination string
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int start;
	int end;

	end = 0;
	while (*(src + end) != '\0')
	{
		end++;
	}
	start = 0;
	while (1)
	{
		*(dest + start) = *(src + start);
		if (*(src + start) == '\0')
		{
			break;
		}
		start++;
	}
	return (dest);
}

/**
 * infinite_add - Add two large numbers
 * @n1: the first num
 * @n2: the second num
 * @r: the buffer of the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *num1 = malloc(255);
	char *num2 = malloc(255);
	int sum = 0;
	int carry = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	num1 = _strcpy(num1, n1);
	num2 = _strcpy(num2, n2);
	rev_string(num1);
	rev_string(num2);
	for (i = 0; i < size_r - 1; i++)
	{
		if (num1[j] == '\0' && num2[k] == '\0' && carry == 0)
		{
			break;
		}
		sum = carry;
		if (num1[j] != '\0')
		{
			sum += num1[j++] - '0';
		}
		if (num2[k] != '\0')
		{
			sum += num2[k++] - '0';
		}
		carry = sum / 10;
		sum %= 10;
		r[i] = '0' + sum;
	}
	if (num1[j] != '\0' || num2[k] != '\0' || carry != 0)
	{
		return (0);
	}
	r[i] = '\0';
	rev_string(r);
	return (r);
}
