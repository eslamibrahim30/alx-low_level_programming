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
	int num;

	num = 0;
	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
