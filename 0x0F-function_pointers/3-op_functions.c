#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the addition operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the subtraction operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the multiplication operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the division operation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculate the remainder of the division of two numbers
 * @a: the first number
 * @b: the first number
 *
 * Return: the remainder of the division operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
