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
	int carry;

	a[0] = '1';
	b[0] = '2';
	while (1)
	{
		printf("%s", strrev(a));
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
			b[j] = b[j] - '0' + temp[j] - '0' + carry;
			carry = b[j] / 10;
			b[j] = '0' + (b[j] % 10);
		}
	}
	return (0);
}
