#include "main.h"

/**
 * prime_checker - checks if j is a prime number
 * @i: divider
 * @j: number to be computed
 *
 * Return: 0 or 1
 */

int prime_checker(int i, int j)
{
	if (j % i == 0 || j < 2)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (prime_checker(i + 1, j));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be computed
 *
 * Return: 1 for prime numbers
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_checker(2, n));
}
