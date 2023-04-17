#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * zero_array - Initializes an array with zeros
 * @arr: the given array
 * @size: the size of the array
 */
void zero_array(int *arr, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

/**
 * mul_one - Multplies big number stored in array by one digit integer
 * @num1: the big number
 * @size: the number of digits in the big number
 * @n: the one digit integer
 *
 * Return: the address of the result
 */
void mul_one(int *num1, unsigned int size, int n)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		num1[i] *= n;
	}
	for (i = 0; i < size - 1; i++)
	{
		num1[i + 1] += num1[i] / 10;
		num1[i] %= 10;
	}
}

/**
 * print_large - Print large num stored in an array and ignore leading zeros
 * @num: the large num
 * @size: the size of the array
 */
void print_large(int *num, unsigned int size)
{
	unsigned int i;
	int leading_zeros;

	leading_zeros = 1;
	for (i = 0; i < size; i++)
	{
		if (leading_zeros && num[i] == 0)
		{
			continue;
		}
		else
		{
			leading_zeros = 0;
			printf("%d", *(num + i));
		}
	}
	if (leading_zeros == 1)
	{
		printf("%d", 0);
	}
	printf("\n");
}

/**
 * reverse_nums - Reverses the order of nums in an array
 * @arr: the given array
 * @size: the array size
 */
void reverse_nums(int *arr, unsigned int size)
{
	unsigned int start;
	unsigned int end;
	int temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

/**
 * assign_large - Assigns large number to an array of integers
 * @arr: the target array
 * @str: the given number
 */
void assign_large(int *arr, char *str)
{
	unsigned int i;
	unsigned int len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i] - '0';
	}
}

/**
 * valid_arguments - checks if the given arguments are valid
 * @argc: the number of arguments
 * @argv: the given arguments
 *
 * Return: 1 if the given arguments are valid number, or 0 otherwise
 */
int valid_arguments(int argc, char **argv)
{
	char **arg;
	char *p;

	if (argc != 3)
	{
		return (0);
	}
	for (arg = argv + 1; *arg; ++arg)
	{
		for (p = *arg; *p; ++p)
		{
			if (!isdigit(*p))
			{
				return (0);
			}
		}
	}
	return (1);
}

/**
 * main - check the code for
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int *num1;
	int *num2;
	int *ans;
	unsigned int len_ans;
	unsigned int i;
	unsigned int j;
	unsigned int rem;

	if (!valid_arguments(argc, argv))
	{
		printf("Error\n");
		exit(98);
	}
	len_ans = (int)strlen(argv[1]) + (int)strlen(argv[2]) + 5;
	num1 = malloc(len_ans * sizeof(int));
	num2 = calloc(len_ans, sizeof(int));
	ans = calloc(len_ans, sizeof(int));
	assign_large(num2, argv[2]);
	reverse_nums(num2, (unsigned int)(strlen(argv[2])));
	for (i = 0; i < len_ans; i++)
	{
		zero_array(num1, len_ans);
		assign_large(num1, argv[1]);
		reverse_nums(num1, (unsigned int)(strlen(argv[1])));
		mul_one(num1, len_ans, num2[i]);
		rem = 0;
		for (j = i; j < len_ans; j++)
		{
			ans[j] = ans[j] + num1[j - i] + rem;
			rem = ans[j] / 10;
			ans[j] %= 10;
		}
	}
	reverse_nums(ans, len_ans);
	print_large(ans, len_ans);
	free(num1);
	free(num2);
	free(ans);
	return (0);
}