#include <stdio.h>
#include "main.h"

/**
 * print - print multiple digits
 * @n: to be printed
 *
 * Return: none
 */

void print(int n)
{
	if (n / 10)
	{
		print(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * more_numbers - print from 0 to 14 ten times
 *
 * Return: none
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10)
			{
				print(i);
			}
			else
			{
			_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
