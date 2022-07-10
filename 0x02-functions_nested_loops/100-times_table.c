#include <stdio.h>
#include "main.h"

/**
 * print - prints long int
 * @m: operand
 * Return: 0
 */

void print(int m)
{
	if (m / 10)
	{
		print(m / 10);
	}
	_putchar(m % 10 + '0');
}

/**
 * print_times_table - prints times table
 * @n: operand
 * Return: none
 */

void print_times_table(int n)
{
	int i;
	int j;

if (n <= 15 && n >= 0)
{
	for (j = 0; j <= n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			if (i == 0)
				_putchar(i * j + '0');
			else
			{
				if (i * j / 10 != 0 && i * j / 100 == 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					print(i * j);
				}
				else if (i * j / 10 == 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					print(i * j);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					print(i * j);
				}
			}
		}
		_putchar('\n');
	}
}
}
