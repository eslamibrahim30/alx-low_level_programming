#include <stdio.h>

/**
* main - the starting point of the program
* @argc: the number of command line arguments
* @argv: the command line arguments
*
* Return: 0
*/

int main(int argc, char **argv)
{
	int sum;
	int num;
	int i;
	int j;

	sum = 0;
	if (argc <= 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = 0;
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					num *= 10;
					num += argv[i][j] - '0';
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
