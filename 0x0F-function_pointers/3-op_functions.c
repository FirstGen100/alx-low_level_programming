#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - performs subtraction
 * @a: first num
 * @b: second num
 * Return: difference btn a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - performs multiplication
 * @a: first num
 * @b: second num
 * Return: multiple of a, b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - performs division
 * @a: first num
 * @b: second num
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - perform a modulus operation
 * @a: first num
 * @b: second num
 * Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

