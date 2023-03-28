#include "main.h"

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
