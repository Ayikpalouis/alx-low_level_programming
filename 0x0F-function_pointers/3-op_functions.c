#include "3-calc.h"

/**
 * op_add - performs addition
 * @a: first operand
 * @b: second operand
 *
 * Return: sum of numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction
 * @a: first operand
 * @b: second operand
 *
 * Return: difference of numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication
 * @a: first operand
 * @b: second operand
 *
 * Return: product of numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division
 * @a: first operand
 * @b: second operand
 *
 * Return: quotient
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
 * op_mod - gets modulo
 * @a: first operand
 * @b: second operand
 *
 * Return: remainder after modulo operation
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
