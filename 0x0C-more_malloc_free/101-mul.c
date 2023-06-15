#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * zero_memory - Set allocated memory to zero
 * @mem: the allocated memory
 * @size: the size of the allocated memory
 */
void zero_memory(char **mem, unsigned int size)
{
	unsigned int i = 0;

	for (i = 0; i < size; i++)
	{
		*(*mem + i) = 0;
	}
}

/**
 * mul_one - Multiplies big number by one digit number
 * @num: the big number
 * @digit: the one digit number
 * @result: the result memory
 */
void mul_one(char *num, char digit, char **result)
{
	unsigned int i;
	unsigned int size;

	size = strlen(num);
	for (i = 0; i < size; i++)
	{
		*(*result + i) += (num[size - i - 1] - '0') * (digit - '0');
		*(*result + i + 1) += *(*result + i) / 10;
		*(*result + i) %= 10;
	}
}

/**
 * is_number - Checks if a string can be a number
 * @num: the given string
 * @size: the size of the given string
 *
 * Return: 1 if the string consists of digits only,
 * or 0 otherwise
 */
int is_number(char *num, unsigned int size)
{
	unsigned int i = 0;

	for (i = 0; i < size; i++)
	{
		if (num[i] < '0' || num[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * mul - Multiply two big numbers
 * @num1: the first number
 * @size1: the size of the first number
 * @num2: the second number
 * @size2: the size of the second number
 */
void mul(char *num1, unsigned int size1, char *num2, unsigned int size2)
{
	char *ans;
	char *temp;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int size = size1 + size2 + 2;

	ans = malloc(size);
	temp = malloc(size1 + 1);
	zero_memory(&ans, size);
	for (i = size2 - 1; i >= 0; i--)
	{
		zero_memory(&temp, size1 + 1);
		mul_one(num1, num2[i], &temp);
		l = 0;
		for (j = k; j < size - 1; j++)
		{
			if ((unsigned int)l < size1 + 1)
			{
				ans[j] += temp[l++];
			}
			ans[j + 1] += ans[j] / 10;
			ans[j] %= 10;
		}
		k++;
	}
	k = size - 1;
	while (ans[k] == 0 && k >= 0)
		k--;
	while (k >= 0)
		_putchar(ans[k--] + '0');
	_putchar('\n');
	free(ans);
	free(temp);
}

/**
 * main - Entry point
 * @argc: the number of arguments of the main function
 * @argv: the actual arguments of the main function
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int check_nums = 0;
	unsigned int size1 = 0;
	unsigned int size2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	size1 = strlen(argv[1]);
	size2 = strlen(argv[2]);
	if (size1 == 0 || size2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	check_nums = is_number(argv[1], size1) && is_number(argv[2], size2);
	if (check_nums == 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (size1 >= size2)
		mul(argv[1], size1, argv[2], size2);
	else
		mul(argv[2], size2, argv[1], size1);
	return (0);
}
