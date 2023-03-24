#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two integers
 * @a: parameter a
 * @b: parameter b
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns difference of two numbers
 * @a: parameter A
 * @b: parameter B
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns product of two numbers
 * @a: parameter A
 * @b: parameter B
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns division of two numbers
 * @a: parameter A
 * @b: parameter B
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder after division of 2 numbers
 * @a: parameter A
 * @b: parametere B
 * Return: Remainder remainder after division of 2 numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
