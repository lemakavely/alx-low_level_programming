#include <stdio.h>
#include "main.h"

/**
 * times_table - prints times table
 *
 * Return: none
 */

void print_times_table(int n)
{
	int i;
	int j;
if(n <= 15 && n >= 0)
{
	for (j = 0; j <= n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			if (i == 0)
			{
				_putchar(i * j + '0');
			}
			else
			{
			if (i * j / 10 != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
			}
			else if(i * j / 10 == 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(i * j + '0');
			}
			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar((i * j) / 100 + '0');
			_putchar((i * j) % 100 + '0');
			_putchar((i * j) % 10 + '0');
			}
			}
		}
		_putchar('\n');
	}
}
}
