#include <stdio.h>
#include "main.h"
/**
 * printchars - print charachters
 * @j: op1
 * @i: op2
 * @k: op3
 * @l: op4
 */

void printchars(int j, int i, int k, int l)
{
	for (k = 0; k < 6; k++)
	{
		for (l = 0; l < 10; l++)
		{
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar('\n');
		}
	}
}
/**
 * jack_bauer - prints minutes in a day
 *
 * Return: none
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (i = 0; i < 3; i++)
	{
		if (i == 2)
		{
			for (j = 0; j < 4; j++)
			{
				printchars(j, i, k, l);
			}
		}
		else
		{
			for (j = 0; j < 10; j++)
			{
				printchars(j, i, k, l);
			}
		}
	}
}
