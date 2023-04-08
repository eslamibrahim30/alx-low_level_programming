#include <stdio.h>
#include <stdlib.h>

/**
* main - the starting point of the program
* @argc: the number of command line arguments
* @argv: the command line arguments
*
* Return: 0
*/

int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	int nCoins;
	int total;
	int i;

	nCoins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		total = atoi(argv[1]);
		if (total <= 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				nCoins += total / coins[i];
				total %= coins[i];
			}
			printf("%d\n", nCoins);
		}
	}
	return (0);
}
