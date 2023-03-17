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
	int left1, right1, left2, right2;

	left1 = '0';
	right1 = '0';
	left2 = '0';
	right2 = '1';
	while (1)
	{
		putchar(left1);
		putchar(right1);
		putchar(' ');
		putchar(left2);
		putchar(right2);
		if (left1 == '9' && right1 == '8' && left2 == '9' && right2 == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (left2 == '9' && right2 == '9')
		{
			left1 = (right1 == '9' ? left1 + 1 : left1);
			right1 = (right1 == '9' ? '0' : right1 + 1);
			left2 = (right1 == '9' ? left1 + 1 : left1);
			right2 = (right1 == '9' ? '0' : right1 + 1);
		}
		else
		{
			left2 = (right2 == '9' ? left2 + 1 : left2);
			right2 = (right2 == '9' ? '0' : right2 + 1);
		}
	}
	putchar('\n');
	return (0);
}
