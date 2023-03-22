#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long a;
	unsigned long long b;
	unsigned long long temp;
	int i;
	int j;

	a[0] = '1';
	b[0] = '2';
	while (1)
	{
		puts(a);
		if (i == 98)
		{
			puts("\n");
			break;
		}
		else
		{
			puts(", ");
			i++;
		}
		temp = a;
		a = b;
		b = b + temp;
	}
	return (0);
}
