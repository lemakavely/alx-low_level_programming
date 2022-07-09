#include <stdio.h>
#include "main.h"

/**
 * print_number - print multiple digits and negatives
 * @n: to be printed
 *
 * Return: none
 */

void print_number(int n)
{
	int base = 10;
	int zero = 0;

	if (n < zero)
	{
	_putchar('-');
	n = -n;
	}
	if (n / base)
	{
		print_number(n / base);
	}
	_putchar(n % base + '0');
}
