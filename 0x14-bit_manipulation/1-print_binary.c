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
 * print - prints the binary result
 * @num: number to compute binary for
 * @j: where 1 happened in the binary number
 *
 * Return: none
 */

void print(unsigned long int num, int j)
{
	int flag, i = 0;

	for (i = j; i >= 0; i--)
	{
		if (num >= power_of_two(i))
		{
			_putchar('1');
			flag = 1;
			num -= power_of_two(i);
		}
		else if (num < power_of_two(i) && flag == 1)
		{
			_putchar('0');
		}
	}
}

/**
 * print_binary - prints binary version of a number
 * @n: number to convert
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
		_putchar(n + '0');
	else
		print(n, 32);
}

