#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0 if the code executed without errors
 */
int main(void)
{
	int left, right;

	left = '0';
	right = '1';
	while (left <= '9')
	{
		while (right <= '9')
		{
			putchar(left);
			putchar(right);
			if (!(left == '8' && right == '9'))
			{
				putchar(',');
				putchar(' ');
			}
			right++;
		}
		left++;
		right = left + 1;
	}
	putchar('\n');
	return (0);
}
