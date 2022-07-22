#include "main.h"

/**
 * factorial - print factorial of n
 * @n: number to be computed
 *
 * Return: -1 or factorial of n
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
