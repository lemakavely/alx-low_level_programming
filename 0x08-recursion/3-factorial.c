#include "main.h"

/**
 * factorial - print factorial of a number
 * @n: number to be computed
 *
 * Return: fatorial of n
 */

int factorial(int n)
{
	if (n == 1)
		return (0);
	return (n * factorial(n - 1));
}
