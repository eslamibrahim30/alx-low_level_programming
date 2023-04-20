#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - Adds two nums
 * @a: the first num
 * @b: the second num
 *
 * Return: the result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two nums
 * @a: the first num
 * @b: the second num
 *
 * Return: the result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two nums
 * @a: the first num
 * @b: the second num
 *
 * Return: the result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two nums
 * @a: the first num
 * @b: the second num
 *
 * Return: the result of the operation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculate the remainder of the division
 * @a: the first num
 * @b: the second num
 *
 * Return: the result of the operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
