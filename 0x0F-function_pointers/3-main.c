#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
* main - causes an infinite loop
* @argc: the number of arguments
* @argv: the given arguments
*
* Return: 0
*/

int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
			&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
