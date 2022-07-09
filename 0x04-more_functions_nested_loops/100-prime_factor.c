#include <stdio.h>

/**
 * prime_factor - find prime factor of a number
 * @n: number to be computed
 *
 * Return: 0
 */

void prime_factor(long int n)
{
	int c = 2;

	while (n > 1)
	{
	if (n % c == 0)
	{
		n /= c;
	}
	else
		c++;
	}
	printf("%d\n", c);
}

/**
 * main - print the gpf
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;

	prime_factor(n);
	return (0);
}
