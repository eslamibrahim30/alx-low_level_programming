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
	int left, mid, right;

	left = '0';
	mid = '1';
	right = '2';
	while (left <= '9')
	{
		while (mid <= '9')
		{
			while (right <= '9')
			{
				putchar(left);
				putchar(mid);
				putchar(right);
				if (!(left == '7' && mid == '8' && right == '9'))
				{
					putchar(',');
					putchar(' ');
				}
				right++;
			}
			mid++;
			right = mid + 1;
		}
		left++;
		mid = left + 1;
		right = mid + 1;
	}
	putchar('\n');
	return (0);
}
