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
	int first;
	int second;
	int i;

	first = 0;
	second = 0;
	if (argc == 3)
	{
		for (i = 0; argv[1][i] != '\0'; i++)
		{
			if (argv[1][i] >= '0' && argv[1][i] <= '9')
			{
				first *= 10;
				first += argv[1][i] - '0';
			}
		}
		first *= (argv[1][0] == '-' ? -1 : 1);
		for (i = 0; argv[2][i] != '\0'; i++)
		{
			if (argv[2][i] >= '0' && argv[2][i] <= '9')
			{
				second *= 10;
				second += argv[2][i] - '0';
			}
		}
		second *= (argv[2][0] == '-' ? -1 : 1);
		printf("%d\n", first * second);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
