#include <stdio.h>
#include "main.h"

/**
 * print_number - print integer
 * @n: int to be printed
 * Return: none
 */

void print_number(int n)
{
	int num, count;

	num = n;
	while (n != 0)
	{
		n = n / 10;
		count++;
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
	else
	{
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
}
