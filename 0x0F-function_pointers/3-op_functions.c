#include "3-calc.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: operand 1
 * @b: operand 2
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/** 
 * op_sub - sbtract two integers
 * @a: operand one
 * @b: operand two
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (abs(a - b));
}

/**
 * op_mul - multiplies a and b
 * @a: operand one
 * @b: operand two
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a with b
 * @a: dividend
 * @b: divider
 *
 * Return: a devided by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - compute modulus of a by b
 * @a: devidend
 * @b: devider
 *
 * Return: a modulus b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
