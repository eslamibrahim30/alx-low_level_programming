#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int temp;
	int i;
	int j;

	a = 1;
	b = 2;
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
