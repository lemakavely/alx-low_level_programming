#include <stdio.h>
#include "main.h"
#include "_putchar.c"

/**
 * print_number - print integer
 * @n: int to be printed
 * Return: none
 */

void print_number(int n)
{
	int num, count = 0;

	num = n;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -(num);
	}
	if (count == 4)
	{
		_putchar(num / 1000 + '0');
		_putchar((num % 1000) / 100 + '0');
		_putchar(((num % 1000) % 100) / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else if (count == 3)
	{
		_putchar(num / 100 + '0');
		_putchar((num % 100) / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else if (count == 2)
	{
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else
		_putchar(num % 10 + '0');
}
