#include "main.h"

/**
 * print_number - Print a given number
 * @n: the given number
 */
void print_number(int n)
{
	unsigned int tmp_n;
	int len;
	int tmp_len;

	len = 1;
	tmp_n = n < 0 ? -1 * (n + 1) : n;
	tmp_n += n < 0 ? 1 : 0;
	tmp_n /= 10;
	while (tmp_n > 0)
	{
		tmp_n /= 10;
		len++;
	}
	if (n < 0)
	{
		_putchar('-');
	}
	len--;
	while (1)
	{
		tmp_n = n < 0 ? -1 * (n + 1) : n;
		tmp_n += n < 0 ? 1 : 0;
		tmp_len = len;
		while (tmp_len > 0)
		{
			tmp_n /= 10;
			tmp_len--;
		}
		tmp_n %= 10;
		_putchar('0' + tmp_n);
		if (len <= 0)
		{
			break;
		}
		len--;
	}
}
