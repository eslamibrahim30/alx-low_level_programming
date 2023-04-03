#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the address of the string that would be checked
 * @accept: the address of the string which contains the considered chars
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int found;
	char *ptr_s;
	char *ptr_accept;

	ptr_s = s;
	len = 0;
	while (*ptr_s != '\0')
	{
		ptr_accept = accept;
		found = 0;
		while (*ptr_accept != '\0')
		{
			if (*ptr_accept == *ptr_s)
			{
				len++;
				found = 1;
				break;
			}
			else
			{
				ptr_accept += 1;
			}
		}
		if (found == 0)
		{
			break;
		}
		else
		{
			ptr_s += 1;
		}
	}
	return (len);
}
