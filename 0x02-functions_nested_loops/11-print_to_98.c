#include <stdio.h>
#include "main.h"

/**
 * print - prints long ints
 * @m: operand
 *
 * Return: 0
 */

void print(int m)
{
	if (m < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (m / 10)
	{
		print(m / 10);
	}
		_putchar(m % 10 + '0');
}

/**
 * print_to_98 - prints numbers to 98
 * @n: start number
 *
 * Return: 0
 */

void print_to_98(int n)
{
	int i = 0;
	int j = 0;

	if (n < 98)
	{
	for (j = n; j < 99; j++)
	{
		print(j);
		if (j == 98)
			continue;
		else
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	}
	else
	{
	for (i = n; i > 97; i--)
	{
		print(i);
		if (i == 98)
			continue;
		else
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	}
	_putchar('\n');
}
