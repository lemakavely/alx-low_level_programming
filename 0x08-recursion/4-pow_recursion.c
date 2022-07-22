#include "main.h"

/**
 * _pow_recursion - print x raised to power of y
 * @x: number to be computed
 * @y: power to raise x with
 *
 * Return: -1 or x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
