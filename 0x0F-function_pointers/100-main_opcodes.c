#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: the number of arguments of the main function
 * @argv: the actual arguments of the main function
 */
void main(int argc, char **argv)
{
	int n;
	int i;
	char *p;
	char s[20];
	char c1;
	char c2;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (void *)(&main);
	for (i = 0; i < n; i++)
	{
		sprintf(s, "%x", *(p + i));
		c1 = s[strlen(s) - 2];
		c2 = s[strlen(s) - 1];
		printf("%c", c1 == 0 ? '0' : c1);
		printf("%c", c2 == 0 ? '0' : c2);
		if (i == n - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}
