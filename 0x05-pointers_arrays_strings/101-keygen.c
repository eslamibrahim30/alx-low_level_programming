#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[128] = "";
	char c;
	int sum;
	int idx;

	sum = 2772;
	srand(time(0));
	idx = 0;
	while (sum > 0)
	{
		c = (char)(48 + rand() % 42);
		if ((int)(c) > sum || sum - (int)(c) < 48)
		{
			c = (char)(sum);
		}
		str[idx] = c;
		idx++;
		sum -= (int)(c);
	}
	str[idx] = '\0';
	printf("%s", str);
	return (0);
}
