#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[50];
	char b[50];
	char temp[50];
	int i;
	int j;
	int max_j;
	int carry;

	a[0] = 1;
	b[0] = 2;
	while (1)
	{
		max_j = 50;
		while (a[max_j] == 0)
		{
			j--;
		}
		for (j = max_j; j >= 0; j--)
		{
			puts('0' + a[j]);
		}
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
		strcpy(temp, a);
		strcpy(a, b);
		for (j = 0; j < 50; j++)
		{
			b[j] = b[j] + temp[j] + carry;
			carry = b[j] / 10;
			b[j] = b[j] % 10;
		}
	}
	return (0);
}
