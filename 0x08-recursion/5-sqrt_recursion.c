#include "main.h"

/**
 * sqrt_finder - finds the aquare root of j
 * @i: expected square root of j
 * @j: number to be computed
 * 
 * Return: square root of j
 */

int sqrt_finder(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (sqrt_finder(i + 1, j));
}

/**
 * _sqrt_recursion - print square rrot of n
 * @n: number to be computed
 * 
 * Return: -1 or square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_finder(1, n));
}
