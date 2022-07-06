#include <stdio.h>
#include "main.h"

/**
 * times_table - prints times table
 *
 * Return: none
 */

void times_table(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
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
			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(i * j + '0');
			}
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
