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
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
