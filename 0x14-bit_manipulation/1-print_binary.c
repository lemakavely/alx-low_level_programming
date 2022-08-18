#include "main.h"

/**
 * power_of_two - computes power of two
 * @exp: power to raise two with
 *
 * Return: result of the power
 */

unsigned long int power_of_two(int exp)
{
	unsigned long int num = 1;

	while (exp > 0)
	{
		num *= 2;
		exp--;
	}
	return (num);
}

/**
 * print_binary - prints binary version of a number
 * @n: number to convert
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = 0, k = 0;
	int flag = 0;

	k = power_of_two(sizeof(unsigned long int) * 8 - 1);
	while (k != 0)
	{
		m = n & k;
		if (m == k)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || k == 1)
			_putchar('0');
		k >>= 1;
	}
}
